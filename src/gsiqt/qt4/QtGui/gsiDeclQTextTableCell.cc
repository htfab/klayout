
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQTextTableCell.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextTableCell>
#include <QTextCharFormat>
#include <QTextCursor>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextTableCell

//  Constructor QTextTableCell::QTextTableCell()


static void _init_ctor_QTextTableCell_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextTableCell> ();
}

static void _call_ctor_QTextTableCell_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextTableCell *> (new QTextTableCell ());
}


//  Constructor QTextTableCell::QTextTableCell(const QTextTableCell &o)


static void _init_ctor_QTextTableCell_2687 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextTableCell & > (argspec_0);
  decl->set_return_new<QTextTableCell> ();
}

static void _call_ctor_QTextTableCell_2687 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextTableCell &arg1 = gsi::arg_reader<const QTextTableCell & >() (args, heap);
  ret.write<QTextTableCell *> (new QTextTableCell (arg1));
}


// int QTextTableCell::column()


static void _init_f_column_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_column_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTableCell *)cls)->column ());
}


// int QTextTableCell::columnSpan()


static void _init_f_columnSpan_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_columnSpan_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTableCell *)cls)->columnSpan ());
}


// QTextCursor QTextTableCell::firstCursorPosition()


static void _init_f_firstCursorPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextCursor > ();
}

static void _call_f_firstCursorPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCursor > ((QTextCursor)((QTextTableCell *)cls)->firstCursorPosition ());
}


// int QTextTableCell::firstPosition()


static void _init_f_firstPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_firstPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTableCell *)cls)->firstPosition ());
}


// QTextCharFormat QTextTableCell::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextCharFormat > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCharFormat > ((QTextCharFormat)((QTextTableCell *)cls)->format ());
}


// bool QTextTableCell::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextTableCell *)cls)->isValid ());
}


// QTextCursor QTextTableCell::lastCursorPosition()


static void _init_f_lastCursorPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextCursor > ();
}

static void _call_f_lastCursorPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCursor > ((QTextCursor)((QTextTableCell *)cls)->lastCursorPosition ());
}


// int QTextTableCell::lastPosition()


static void _init_f_lastPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lastPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTableCell *)cls)->lastPosition ());
}


// bool QTextTableCell::operator!=(const QTextTableCell &other)


static void _init_f_operator_excl__eq__c2687 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTextTableCell & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2687 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextTableCell &arg1 = gsi::arg_reader<const QTextTableCell & >() (args, heap);
  ret.write<bool > ((bool)((QTextTableCell *)cls)->operator!= (arg1));
}


// QTextTableCell &QTextTableCell::operator=(const QTextTableCell &o)


static void _init_f_operator_eq__2687 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QTextTableCell & > (argspec_0);
  decl->set_return<QTextTableCell & > ();
}

static void _call_f_operator_eq__2687 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextTableCell &arg1 = gsi::arg_reader<const QTextTableCell & >() (args, heap);
  ret.write<QTextTableCell & > ((QTextTableCell &)((QTextTableCell *)cls)->operator= (arg1));
}


// bool QTextTableCell::operator==(const QTextTableCell &other)


static void _init_f_operator_eq__eq__c2687 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTextTableCell & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2687 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextTableCell &arg1 = gsi::arg_reader<const QTextTableCell & >() (args, heap);
  ret.write<bool > ((bool)((QTextTableCell *)cls)->operator== (arg1));
}


// int QTextTableCell::row()


static void _init_f_row_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_row_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTableCell *)cls)->row ());
}


// int QTextTableCell::rowSpan()


static void _init_f_rowSpan_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_rowSpan_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTableCell *)cls)->rowSpan ());
}


// void QTextTableCell::setFormat(const QTextCharFormat &format)


static void _init_f_setFormat_2814 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QTextCharFormat & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFormat_2814 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextCharFormat &arg1 = gsi::arg_reader<const QTextCharFormat & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCell *)cls)->setFormat (arg1);
}


// int QTextTableCell::tableCellFormatIndex()


static void _init_f_tableCellFormatIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_tableCellFormatIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextTableCell *)cls)->tableCellFormatIndex ());
}



namespace gsi
{

static gsi::Methods methods_QTextTableCell () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextTableCell::QTextTableCell()\nThis method creates an object of class QTextTableCell.", &_init_ctor_QTextTableCell_0, &_call_ctor_QTextTableCell_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextTableCell::QTextTableCell(const QTextTableCell &o)\nThis method creates an object of class QTextTableCell.", &_init_ctor_QTextTableCell_2687, &_call_ctor_QTextTableCell_2687);
  methods += new qt_gsi::GenericMethod ("column", "@brief Method int QTextTableCell::column()\n", true, &_init_f_column_c0, &_call_f_column_c0);
  methods += new qt_gsi::GenericMethod ("columnSpan", "@brief Method int QTextTableCell::columnSpan()\n", true, &_init_f_columnSpan_c0, &_call_f_columnSpan_c0);
  methods += new qt_gsi::GenericMethod ("firstCursorPosition", "@brief Method QTextCursor QTextTableCell::firstCursorPosition()\n", true, &_init_f_firstCursorPosition_c0, &_call_f_firstCursorPosition_c0);
  methods += new qt_gsi::GenericMethod ("firstPosition", "@brief Method int QTextTableCell::firstPosition()\n", true, &_init_f_firstPosition_c0, &_call_f_firstPosition_c0);
  methods += new qt_gsi::GenericMethod (":format", "@brief Method QTextCharFormat QTextTableCell::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextTableCell::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("lastCursorPosition", "@brief Method QTextCursor QTextTableCell::lastCursorPosition()\n", true, &_init_f_lastCursorPosition_c0, &_call_f_lastCursorPosition_c0);
  methods += new qt_gsi::GenericMethod ("lastPosition", "@brief Method int QTextTableCell::lastPosition()\n", true, &_init_f_lastPosition_c0, &_call_f_lastPosition_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QTextTableCell::operator!=(const QTextTableCell &other)\n", true, &_init_f_operator_excl__eq__c2687, &_call_f_operator_excl__eq__c2687);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTextTableCell &QTextTableCell::operator=(const QTextTableCell &o)\n", false, &_init_f_operator_eq__2687, &_call_f_operator_eq__2687);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QTextTableCell::operator==(const QTextTableCell &other)\n", true, &_init_f_operator_eq__eq__c2687, &_call_f_operator_eq__eq__c2687);
  methods += new qt_gsi::GenericMethod ("row", "@brief Method int QTextTableCell::row()\n", true, &_init_f_row_c0, &_call_f_row_c0);
  methods += new qt_gsi::GenericMethod ("rowSpan", "@brief Method int QTextTableCell::rowSpan()\n", true, &_init_f_rowSpan_c0, &_call_f_rowSpan_c0);
  methods += new qt_gsi::GenericMethod ("setFormat|format=", "@brief Method void QTextTableCell::setFormat(const QTextCharFormat &format)\n", false, &_init_f_setFormat_2814, &_call_f_setFormat_2814);
  methods += new qt_gsi::GenericMethod ("tableCellFormatIndex", "@brief Method int QTextTableCell::tableCellFormatIndex()\n", true, &_init_f_tableCellFormatIndex_c0, &_call_f_tableCellFormatIndex_c0);
  return methods;
}

gsi::Class<QTextTableCell> decl_QTextTableCell ("QtGui", "QTextTableCell",
  methods_QTextTableCell (),
  "@qt\n@brief Binding of QTextTableCell");


GSI_QTGUI_PUBLIC gsi::Class<QTextTableCell> &qtdecl_QTextTableCell () { return decl_QTextTableCell; }

}
