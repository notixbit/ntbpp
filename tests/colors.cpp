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
#include "../notixbit.h"
#include <cassert>

using namespace Ntb::Colors;

int main()
{
    /** Testing colors */
    assert(Colors::RESET == 0);
    assert(Colors::BLACK == 30);
    assert(Colors::RED == 31);
    assert(Colors::GREEN == 32);
    assert(Colors::YELLOW == 33);
    assert(Colors::BLUE == 34);
    assert(Colors::MAGENTA == 35);
    assert(Colors::CYAN == 36);
    assert(Colors::WHITE == 37);

    /** Testing reset color-marker */
    assert(col() == "\033[0m");

    /** Testing color-marker with color */
    assert(col(Colors::BLUE) == "\033[34m");

    /** Testing color-marker with text and front color */
    assert(col("Testing", Colors::RED) == "\033[0m\033[31mTesting\033[0m");

    /** Testing color-marker with text and front/back color */
    assert(col("Testing", Colors::BLACK, Colors::GREEN) == "\033[42m\033[30mTesting\033[0m");
}
