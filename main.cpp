// rsig CMake test
// Copyright 2022 Sean Farrell <sean.farrell@rioki.org>
//
// This program is free software. It comes without any warranty, to
// the extent permitted by applicable law. You can redistribute it
// and/or modify it under the terms of the Do What The Fuck You Want
// To Public License, Version 2, as published by Sam Hocevar. See
// LICENSE.txt for more details.

#include <iostream>
#include <rsig/rsig.h>

int main(int argc, char* argv[])
{
  rsig::signal<int> test_signal;
  test_signal.connect([] (auto n) {
    std::cout << n << std::endl;
  });
  test_signal.emit(42);
  return 0;
}