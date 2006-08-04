/* -*- c++ -*- */
/*
 * Copyright 2006 Free Software Foundation, Inc.
 * 
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef INCLUDED_N2BS_H
#define INCLUDED_N2BS_H

#include <string>

std::string n2bs (int8_t number, size_t digits);
std::string n2bs (int16_t number, size_t digits);
std::string n2bs (int32_t number, size_t digits);
#if 1
std::string n2bs (long number, size_t digits);
#endif
std::string n2bs (int64_t number, size_t digits);
std::string n2bs (u_int8_t number, size_t digits);
std::string n2bs (u_int16_t number, size_t digits);
std::string n2bs (u_int32_t number, size_t digits);
#if 1
std::string n2bs (unsigned long number, size_t digits);
#endif
std::string n2bs (u_int64_t number, size_t digits);

void cout_binary (int number, int digits);

#endif /* INCLUDED_N2BS_H */
