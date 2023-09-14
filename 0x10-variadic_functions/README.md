0x10. C - Variadic Functions

Description
In this project, we explore variadic functions in C.
Variadic functions allow us to work with a variable number of arguments in a function.
We will learn how to use the stdarg.h header and related macros to access and process these arguments.

Learning Objectives
- What are variadic functions and how to use them
- How to use the va_start, va_arg, and va_end macros
- Why and how to use the const type qualifier

Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use the following macros: va_start, va_arg and va_end
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called variadic_functions.h
- Don’t forget to push your header file
- All your header files should be include guarded