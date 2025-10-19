# Notixbit C++ Utility Library (NTB++)

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/notixbit/ntbpp/master/LICENSE) 
[![CMake Test (Linux)](https://github.com/notixbit/ntbpp/actions/workflows/cmake-linux.yml/badge.svg)](https://github.com/notixbit/ntbpp/actions/workflows/cmake-linux.yml)
[![CMake Test (Windows)](https://github.com/notixbit/ntbpp/actions/workflows/cmake-win.yml/badge.svg)](https://github.com/notixbit/ntbpp/actions/workflows/cmake-win.yml)
[![CMake Test (macOS)](https://github.com/notixbit/ntbpp/actions/workflows/cmake-macos.yml/badge.svg)](https://github.com/notixbit/ntbpp/actions/workflows/cmake-macos.yml)
[![CodeQL Analysis](https://github.com/notixbit/ntbpp/actions/workflows/codeql-analysis.yml/badge.svg)](https://github.com/notixbit/ntbpp/actions/workflows/codeql-analysis.yml)
[![Generate Docs](https://github.com/notixbit/ntbpp/actions/workflows/docs.yml/badge.svg)](https://github.com/notixbit/ntbpp/actions/workflows/docs.yml)

NTB++ is a cross-platform header-only utility library for C++ >= 17.

It includes Colors, Templates & Types.
Useful for printing colors, ``std::map`` and ``std::vector`` into ``std::cout``.<br>
A couple of common typealiases (typedefs) like ``String``, ``UInt``, ``StringMap``, ``StringMapOf<Type>`` are included as well.<br>

Motivation:

We developed this lib as part of a program for a customer,<br>
and we figured it might benefit other developers too.

## Table of contents

- [Namespaces](#namespaces)
    - [Ntb](#ntb)
    - [Ntb::Types](#ntbtypes)
    - [Ntb::Templates](#ntbtemplates)
    - [Ntb::Colors](#ntbcolors)
- [Build](#build)
- [Install](#install)
- [Testing](#testing)
- [Usage (Ntb::Colors)](#usage-ntbcolors)
- [Documentation](https://notixbit.github.io/ntbpp/namespaces.html)
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
enum Colors : const UInt
/** Color helpers (optional) */
const UInt Colors::RESET
const UInt Colors::BLACK
const UInt Colors::RED
const UInt Colors::GREEN
const UInt Colors::YELLOW
const UInt Colors::BLUE
const UInt Colors::MAGENTA
const UInt Colors::CYAN
const UInt Colors::WHITE
/**
 * Color marker for foreground/background.
 *
 * @param color The color code.
 * @return String with color marker.
 */
const String col(const UInt color = Colors::RESET)
/**
 * Color marker for foreground, background and text.
 *
 * @param str The input text.
 * @param front The foreground color code.
 * @param back The background color code.
 * @return Encapsulated string with color markers.
 */
const String col(const String str, const UInt front, const UInt back = Colors::RESET)
```

> ``Ntb::Colors`` makes use of ``Ntb::Types`` and exposes it.

---

## Build

Min Std: **C++17** <br />
(structured bindings, inline, nested namespaces)

Tested against OS:

- Linux 4.14.154 Ubuntu 18.04.4 LTS x86_64 (Bionic Beaver)
- Ubuntu 24.04.3
- Windows 7 Home Premium SP1 64 bit
- Windows 10 Home/Pro
- Windows Server 2025 (10.0.26100)
- macOS 15.6.1 (24G90)

Tested against Compiler:

- Clang 9.0.0+
- MSVC 14.28.29910
- MSVC 19.28.29914
- MSVC 19.44.35217
- AppleClang 17.0.0
- GCC 13.3.0


#### CMake

You can use ``cmake`` to install the include files.

```
cd ntbpp
mkdir build && cd build
cmake ..
make install
```

Include files will be placed into: ``${CMAKE_INSTALL_PREFIX}/include/notixbit/ntbpp``

---

## Install

You can use vcpkg, git clone or git submodule to install this library.

### vcpkg

**vcpkg-configuration.json**

```json
{
  "default-registry": {
    //..... redacted
  },
  "registries": [
    {
      "kind": "git",
      "repository": "https://github.com/notixbit/vcpkg-registry",
      "baseline": "c4f78a946944d1a51e89bde41cd61b0460eb6a60",
      "packages": [ "ntbpp" ]
    }
  ]
}

```

Run: ``vcpkg add port ntbpp``

See: https://learn.microsoft.com/en-us/vcpkg/consume/git-registries#3---add-private-registries-to-your-vcpkg-configuration-file


---

### Git Clone

```
git clone <url>
```

### Git Submodule

```
git submodule add <url>
```

---

## Testing

Unit Testing Framework: CTest

```
make all test
```

---

## Usage (``Ntb::Colors``)

```cpp
#include <notixbit.h>
using namespace Ntb::Colors;

std::cout 
  << col("Notixbit Creative", Colors::WHITE, Colors::RED) 
  << std::endl << std::endl 
  << col("====POLICE==LINE==DO==NOT==CROSS====", Colors::BLACK, Colors::YELLOW) 
  << std::endl << std::endl;
```

Result:

<img src="./.github/demo.png" />

---

## Contributing

You're very welcome and free to contribute. Thank you.

---

## License

[MIT](LICENSE)
