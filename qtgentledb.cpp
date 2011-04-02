/*
 * Copyright (C) 2011 Felix Rabe
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "qtgentledb.h"
#include <QDebug>
#include <QtCrypto>


namespace QtGentleDB {

void ID::init(QByteArray array) {
    if (array.isEmpty() || array.size() == 32) {
        myRawIdArray = array;
        return;
    }
    if (array.size() == 64) {
        myRawIdArray = QByteArray::fromHex(array);
        if (myRawIdArray.toHex() == array)
            return;
    }
    qFatal("Trying to initialize GentleDB ID from invalid QByteArray");
}

ID::ID() {
    init(QByteArray());
}

ID::ID(const char *str) {
    if (qstrlen(str) != 64)
        qFatal("Trying to initialize GentleDB ID from invalid C string");
    init(str);
}

ID::ID(const QByteArray &array) {
    init(array);
}

ID::ID(const QString &str) {
    init(str.toUtf8());
}

ID::operator QString() const {
    return myRawIdArray.toHex();
}

DB::DB() {
    if (!QCA::isSupported("sha256")) {
        qFatal("SHA-256 is not supported");
    }
}

ID DB::operator~() {
    return QCA::Random::randomArray(32).toByteArray();
}

ID DB::operator+(QByteArray data) {
    QCA::Hash shaHash("sha256");
    ID id = shaHash.hashToString(data);
    myContent[id] = data;
    return id;
}

const QByteArray DB::operator-(const ID &id) const {
    return myContent[id];
}

ID &DB::operator[](const ID &id) {
    return myPointers[id];
}

}

