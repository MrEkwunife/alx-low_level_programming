0x18. C - Dynamic libraries


After all the fucntion files are created

gcc -c *.c -fpic

object files (.o) will be created.

then you create the dynamic library (.so) using

gcc -shared *.o -o libdynamic.so

to use the libdynamic.so
gcc -L. 0-main.c -ldynamic -o len

the libdynamic.so file is moved to or the path is copied using
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

