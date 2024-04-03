Files to turn in: ft_boolean.h

/*
In summary, this header file (ft_boolean.h) provides definitions for boolean values, a type alias t_bool for representing boolean values using integers, and macros for checking even numbers, representing boolean values (TRUE and FALSE), defining messages for even and odd numbers of arguments, and indicating a successful execution status.
This header file can be included in other source code files to use these definitions and macros.

In C programming, a macro is a preprocessor directive that defines a symbolic name or code snippet. (It is like giving special names to certain building blocks.)
- Macro are used for several purpose in C programming: (Code Reusability, Code Readability, Conditional Compilation, Performance Optimization, Debugging).
- To define a function-like macro, we will use the #define keyword followed by the name of the macro MACRO_NAME , which will be the name of our function. 
*/

  
#ifndef FT_BOOLEAN_H  // checks if the identifier FT_BOOLEAN_H is not defined.
#define FT_BOOLEAN_H  // defines the identifier FT_BOOLEAN_H to prevent the subsequent code from being included if FT_BOOLEAN_H is defined.

#include <unistd.h>

typedef int  t_bool;   // This line defines a new type alias t_bool for int. It essentially creates a synonym for the int data type, which can be used to represent boolean values (TRUE or FALSE) in the program.
#define EVEN(nbr) (nbr % 2 = 0) ? 1 : 0   // Defines a macro EVEN(nbr) that takes an argument nbr and checks if it's even. If nbr is even, it returns 1; otherwise, it returns 0.
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

#endif
