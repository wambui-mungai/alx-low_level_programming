The following files are scripts written for the projects written in C:

files                            Description
libdynamic.so                   C dynamic library containing the function definitions
1-create_dynamic_lib.sh         Bash script that creates a dynamic library called liball.so from all the .c files
100-operations.so               dynamic library that contains C functions that can be called from Python
random.so                       C dynamic library to inject in a giga million program
101-make_me_win.sh              Bash script to inject the libmask.so library, using LD_PRELOAD, in the giga million program
main.h                          Header files containing the function prototypes
