
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQMethodRawArguments.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMethodRawArguments>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QMethodRawArguments

//  Constructor QMethodRawArguments::QMethodRawArguments()


static void _init_ctor_QMethodRawArguments_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMethodRawArguments> ();
}

static void _call_ctor_QMethodRawArguments_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMethodRawArguments *> (new QMethodRawArguments ());
}



namespace gsi
{

static gsi::Methods methods_QMethodRawArguments () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMethodRawArguments::QMethodRawArguments()\nThis method creates an object of class QMethodRawArguments.", &_init_ctor_QMethodRawArguments_0, &_call_ctor_QMethodRawArguments_0);
  return methods;
}

gsi::Class<QMethodRawArguments> decl_QMethodRawArguments ("QtCore", "QMethodRawArguments",
  methods_QMethodRawArguments (),
  "@qt\n@brief Binding of QMethodRawArguments");


GSI_QTCORE_PUBLIC gsi::Class<QMethodRawArguments> &qtdecl_QMethodRawArguments () { return decl_QMethodRawArguments; }

}
