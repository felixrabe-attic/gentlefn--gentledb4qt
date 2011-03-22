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

#ifndef QTGENTLEDB_GLOBAL_H
#define QTGENTLEDB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTGENTLEDB_LIBRARY)
#  define QTGENTLEDB_EXPORT Q_DECL_EXPORT
#else
#  define QTGENTLEDB_EXPORT Q_DECL_IMPORT
#endif

#endif // QTGENTLEDB_GLOBAL_H
