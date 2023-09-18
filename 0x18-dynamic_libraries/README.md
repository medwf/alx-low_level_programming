# 0x18. C - Dynamic libraries

## about:

    - What is a dynamic library, how does it work, how to create one, and how to use it
    - What is the environment variable $LD_LIBRARY_PATH and how to use it
    - What are the differences between static and shared libraries
    - Basic usage nm, ldd, ldconfig

## Task mandatory

0. Create the dynamic library libdynamic.so containing all the functions listed .
1. Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
2. I know, you’re missing C when coding in Python. So let’s fix that:
   - Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
