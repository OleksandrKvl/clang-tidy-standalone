## clang-tidy-standalone

This is an empty clang-tidy standalone version, you can build it without build the 
whole LLVM(which is long). You need to install all packages mentioned 
[here](https://apt.llvm.org/).
Current version is based on llvm-10 so you have to use corresponding packages.

Build instructions:
```
mkdir build
cd build
cmake ..
cmake --build .
```