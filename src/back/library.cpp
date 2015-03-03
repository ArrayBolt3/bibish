﻿/*
 * BIBISH Is [a] Bible Interactive SHell, a front-end for the SWORD Project
 * inspired by debian's bible package
 * Copyright (C) 2015  David "Judah's Shadow" Blue <yudahsshadow@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include "library.h"
#include <swmgr.h>
#include <markupfiltmgr.h>
#include <string>
#include <list>

Library::Library()
{
    sword::SWMgr lib(new sword::MarkupFilterMgr(sword::FMT_PLAIN));
    this->bibles = lib;

}

Library::~Library()
{

}

std::list Library::getBibles()
{
  std::list<std::string> theList;
  theList = this->bibles.Modules;
  return theList;
}
