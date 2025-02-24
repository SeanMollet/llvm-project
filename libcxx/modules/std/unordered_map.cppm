// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

module;
#include <unordered_map>

export module std:unordered_map;
export namespace std {
  // [unord.map], class template unordered_­map
  using std::unordered_map;

  // [unord.multimap], class template unordered_­multimap
  using std::unordered_multimap;

  using std::operator==;
#if 1 // P1614
  using std::operator!=;
#endif

  using std::swap;

  // [unord.map.erasure], erasure for unordered_­map
  using std::erase_if;

  namespace pmr {
    using std::pmr::unordered_map;
    using std::pmr::unordered_multimap;
  } // namespace pmr
} // namespace std
