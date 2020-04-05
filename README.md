# Notixbit C++ Utility Library (NTB++)

NTB++ is a header-only utility library for C++ >= 17.

---

## Table of contents

- [Namespaces](#namespaces)
    - [Ntb](#ntb)
    - [Ntb::Types](#ntbtypes)
    - [Ntb::Templates](#ntbtemplates)
    - [Ntb::Colors](#ntbcolors)
- [Build](#build)
- [Usage (Ntb::Colors)](#usage-ntbcolors-)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [License](#license)

---

## Namespaces

### ``Ntb``

```cpp
using namespace Ntb;
```

Exposes the following namespaces:

```cpp
namespace Ntb::Types
namespace Ntb::Templates
namespace Ntb::Colors
```

---

### ``Ntb::Types``

```cpp
using namespace Ntb::Types;
```

Exposes the following types:

```cpp
using Bool
using Char
using UChar
using Short
using UShort
using Int
using UInt
using Long
using LongLong
using ULong
using ULongLong
using String
using MapOf<Type,Type2>
using StringMapOf<Type>
using StringMap
using Vector<Type>
```

---

### ``Ntb::Templates``

```cpp
using namespace Ntb::Templates;
```

Exposes the following templates:

```cpp
/**
 * Overloads the '<<' cout operator to recognize vectors.
 *
 * @param The vector of type <T>.
 * @return ostream.
 */
std::ostream &operator<<(std::ostream &os, const Vector<T> &v)
/**
 * Overloads the '<<' cout operator to recognize maps.
 * 
 * Prints a newline for all elements but the last.
 *
 * @param The map of type <T,U>.
 * @return ostream.
 */
std::ostream &operator<<(std::ostream &os, const MapOf<T,U> &v)
```

> ``Ntb::Templates`` makes use of ``Ntb::Types`` and exposes it.

---

### ``Ntb::Colors``

```cpp
using namespace Ntb::Colors;
```

Exposes the following utilities for coloring ``std::cout`` output:

```cpp
/** Helpers */
enum Colors : const UInt
/** Foreground */
const UInt Colors::RESET
const UInt Colors::BLACK
const UInt Colors::RED
const UInt Colors::GREEN
const UInt Colors::YELLOW
const UInt Colors::BLUE
const UInt Colors::MAGENTA
const UInt Colors::CYAN
const UInt Colors::WHITE
/** Background */
const UInt Colors::BACKBLACK
const UInt Colors::BACKRED
const UInt Colors::BACKGREEN
const UInt Colors::BACKYELLOW
const UInt Colors::BACKBLUE
const UInt Colors::BACKMAGENTA
const UInt Colors::BACKCYAN
const UInt Colors::BACKWHITE
/**
 * Color marker for foreground/background.
 *
 * @param color The Colors enum member.
 * @return String with color marker.
 */
const String col(const Colors color = Colors::RESET)
/**
 * Color marker for foreground, background and text.
 *
 * @param str The input text.
 * @param color The foreground Colors enum member.
 * @param back The background Colors enum member.
 * @return String with color marker.
 */
const String col(const String str, const Colors color, const Colors back = Colors::RESET)
```

> ``Ntb::Colors`` makes use of ``Ntb::Types`` and exposes it.

---

## Build

Just clone this repo into your thirdparty (or lib or includes) folder,<br>
and instruct your compiler to include it.

Specs:

Min Std: **C++17** <br />
(Structured bindings, inline, Nested namespaces)

Tested against OS:

- Linux 4.14.154 Ubuntu 8.04.4 LTS x86_64 (Bionic Beaver)
- Windows 7 Home Premium SP1 64 bit
- Windows 10 Home

Tested against Compiler:

- clang 9.0.0


```
git clone <url> thirdparty
```

Include via ``INCLUDES`` flags (in Makefile etc):

```
INCLUDES = -Ithirdparty/notixbit
```

Or via commandline:

```
clang++ -O1 -std=c++17 -pedantic -Ithirdparty/notixbit
```

---

## Usage (``Ntb::Colors``)

```cpp
#include <notixbit.h>
using namespace Ntb::Colors;

std::cout 
  << col("Notixbit Creative", Colors::WHITE, Colors::BACKRED) 
  << std::endl << std::endl 
  << col("====POLICE==LINE==DO==NOT==CROSS====", Colors::BLACK, Colors::BACKYELLOW) 
  << std::endl << std::endl;
```

Result:

<img src="./.github/demo.png" />

---

## Roadmap

+ Tests
+ CI

---

## Contributing

You're very welcome and free to contribute. Thank you.

---

## License

[MIT](LICENSE)