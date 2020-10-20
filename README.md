## clang-tidy-standalone

This is an empty clang-tidy standalone version, you can build it without build the 
whole LLVM(which takes a long). Current version is based on llvm-10 so you have to use corresponding packages.

### Usage

Install all LLVM 10 [packages](https://apt.llvm.org/).    
Follow the [official manual](https://clang.llvm.org/extra/clang-tidy/Contributing.html).    
Build as usual:

```
mkdir build
cd build
cmake ..
cmake --build .
```