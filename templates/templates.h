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
#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <ostream>
#include <vector>
#include <map>

namespace Ntb
{
namespace Templates
{
  using namespace Types;
  /**
   * Overloads the '<<' cout operator to recognize vectors.
   *
   * @param The vector of type <T>.
   * @return ostream.
   */
  template <typename T>
  std::ostream &operator<<(std::ostream &os, const Vector<T> &v)
  {
    for (auto const &it : v)
    {
      os << it;
    }
    return os;
  }
  /**
   * Overloads the '<<' cout operator to recognize maps.
   * 
   * Prints a newline for all elements but the last.
   *
   * @param The map of type <T,U>.
   * @return ostream.
   * @see https://stackoverflow.com/a/33658457/1380486
   */
  template <typename T, typename U>
  std::ostream &operator<<(std::ostream &os, const MapOf<T,U> &v)
  {
    for (auto const &it : v)
    {
      os << it.first << ":" << it.second;
      if (it.first != v.rbegin()->first)
        os << std::endl;
    }
    return os;
  }
} // namespace Templates
} // namespace Ntb
#endif
