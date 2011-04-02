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

#ifndef QTGENTLEDB_H
#define QTGENTLEDB_H

#include <QString>
#include <QHash>

#include "qtgentledb_global.h"

namespace QtGentleDB {

class QTGENTLEDB_EXPORT ID {
    void init(QByteArray array);
public:
    ID();
    ID(const char *str);
    ID(const QByteArray &array);
    ID(const QString &str);
    operator QString() const;
private:
    QByteArray myRawIdArray;
};

class QTGENTLEDB_EXPORT DB {
public:
    DB();
    ID operator~();
    ID operator+(QByteArray data);
    const QByteArray operator-(const ID &id) const;
    ID &operator[](const ID &id);
private:
    QHash<QString, QByteArray> myContent;
    QHash<QString, ID> myPointers;
};

}

#endif // QTGENTLEDB_H
