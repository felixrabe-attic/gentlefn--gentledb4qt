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

#include <QtTest>
#include "../qtgentledb.h"
#include <QtCrypto>

using namespace QtGentleDB;

class TestQtGentleDB : public QObject
{
    Q_OBJECT
private slots:
    void someTest() {
        qDebug() << ID("59892dccd3a68a5364b0e8eb7a7da09211003e90af1667af30217d2c4655036b");
        qDebug() << ~gedb;
        qDebug() << (gedb + "1234");
        qDebug() << gedb - (gedb + "1234");
        qDebug() << gedb - (gedb + "Whatever may come, is fine");
        qDebug() << (gedb["669dc24692b035deda9f16d6cd75d9ad8c9a027de93e20cb5492962175bb1f5d"] = gedb + "1234");
        qDebug() << gedb["669dc24692b035deda9f16d6cd75d9ad8c9a027de93e20cb5492962175bb1f5d"];
    }
private:
    QCA::Initializer qcaInit;
    DB gedb;
};

QTEST_MAIN(TestQtGentleDB)
#include "testqtgentledb.moc"
