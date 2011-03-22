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

using namespace QtGentleDB;

class TestQtGentleDB : public QObject
{
    Q_OBJECT
private slots:
    void initTestCase() {
        gedb = DB();
    }
    void someTest() {
        qDebug() << (gedb + "holla");
        qDebug() << QString("more");
    }
    void cleanupTestCase() {
    }
private:
    DB gedb;
};

QTEST_MAIN(TestQtGentleDB)
#include "testqtgentledb.moc"
