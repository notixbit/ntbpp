/*
* The MIT License (MIT)
*
* Copyright (c) Notixbit Creative <info@notixbit.net>
* Copyright (c) Steven Agyekum <agyekum@posteo.de>
*
* Permission is hereby granted, free of charge, to any person obtaining a copy of this software
* and associated documentation files (the "Software"), to deal in the Software without restriction,
* including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
* and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
* subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all copies
* or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#ifndef TYPES_H
#define TYPES_H

#include <map>
#include <vector>
#include <string>

namespace Ntb
{
namespace Types
{
  using Bool = bool;
  using Char = char;
  using UChar = unsigned char;
  using Short = short;
  using UShort = unsigned short;
  using Int = int;
  using UInt = unsigned int;
  using Long = long;
  using LongLong = long long;
  using ULong = unsigned long;
  using ULongLong = unsigned long long;
  using String = std::string;

  template <typename T, typename U>
  using MapOf = std::map<T,U>;

  template <typename T>
  using StringMapOf = MapOf<String, T>;
  using StringMap = StringMapOf<String>;

  template <typename T>
  using Vector = std::vector<T>;
} // namespace Types
} // namespace Ntb
#endif
