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
#ifndef COLORS_H
#define COLORS_H

#include <string>

namespace Ntb
{
namespace Colors
{
  using namespace Types;

  enum Colors : const UInt
  {
    RESET = 0,
    BLACK = 30,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE
  };

  /**
   * Color marker for foreground/background.
   *
   * @param color The color code.
   * @return String with color marker.
   */
  inline const String col(const UInt color = Colors::RESET)
  {
    const String begin = "\033[";
    const String end = "m";
    return begin + std::to_string(color) + end;
  }
  /**
   * Color marker for foreground, background and text.
   *
   * @param str The input text.
   * @param front The foreground color code.
   * @param back The background color code.
   * @return Encapsulated string with color markers.
   */
  inline auto col(
    const String str,
    const UInt front,
    UInt back = Colors::RESET)
  {
    back = (back != Colors::RESET) ? back + 10U : back;
    return col(back) + col(front) + str + col();
  }
} // namespace Colors
} // namespace Ntb
#endif
