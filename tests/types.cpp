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

using namespace Ntb::Types;

int main()
{
    /** Testing types */

    Bool testBool = true;
    Char testChar = -'A';
    UChar testUChar = u'A';
    Short testShort = -1;
    UShort testUShort = 1u;
    Int testInt = -10;
    UInt testUInt = 10u;
    Long testLong = -264444489;
    LongLong testLongLong = -236444448941;
    ULong testULong = 264444489u;
    ULongLong testULongLong = 236444448941u;
    String testString = "Testing";

    MapOf<String, String> testMapOf = {
        {"TestKey", "TestVal"}
    };

    StringMapOf<Int> testStringMapOf = {
        {"TestKey", -1}
    };

    StringMap testStringMap = {
        {"TestKey", "TestVal"}
    };

    Vector<String> testVector = { "TestVal" };

    assert(testBool == true);
    assert(testChar == -'A');
    assert(testUChar == u'A');
    assert(testShort == -1);
    assert(testUShort == 1u);
    assert(testInt == -10);
    assert(testUInt == 10u);
    assert(testLong == -264444489);
    assert(testLongLong == -236444448941);
    assert(testULong == 264444489u);
    assert(testULongLong == 236444448941u);
    assert(testString == "Testing");
    assert(testMapOf["TestKey"] == "TestVal");
    assert(testStringMapOf["TestKey"] == -1);
    assert(testStringMap["TestKey"] == "TestVal");
    assert(testVector[0] == "TestVal");
}
