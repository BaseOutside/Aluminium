# Aluminium

This library is written for killing time.

The goal is to implement various functions thinly and widely.

This library is published under MIT licence.

# How to Use

First, write your code and add it into `CMakeLists.txt`.

Then,

```bash
$ mkdir build && cd build
$ cmake ..
$ make
```

Or...

Include `aluminium/aluminium.hpp`.

To use macro, you have to include `aluminium/macro.hpp`.

# Contains (will be changed)

* base64
    * base64encode
    * base64encode_url
    * base64decode
    * base64decode_url

* csv
    * WIP

* math
    * pi
    * e
    * factorial
    * count_digit
    * prime_factorization
    * rho

* random
    * xorshift
    * LCGs (Linear congruential generators)

* search
    * linear_search
    * binary_search

* sort
    * quick_sort
    * bubble_sort
    * comb_sort
    * insertion_sort
    * selection_sort
    * gnome_sort
    * slow_sort
    * bucket_sort
    * stalin_sort
    * hitler_sort

* util
    * erase_if
    * log
    * split
    * alprint

* macro (This header is separeted from aluminium.hpp)
    * al_FOR (ALUMINIUM_MACRO_FOR)
    * al_REP (ALUMINIUM_MACRO_REP)
    * al_LOOP (ALUMINIUM_MACRO_LOOP)
