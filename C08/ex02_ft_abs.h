Files to turn in: ft_abs.h

/*
Create a macro ABS which replaces its argument by it absolute value.

- The abs function in the C programming language stands for "Absolute Value". In other words, it's the distance between a number and a number line beginning at 0, without taking the direction into account.
- A number will always have a positive abs value or absolute value, meaning that a distance will never be negative.
*/

  
#ifndef FT_ABS_H   // This checks if the identifier FT_ABS_H is not defined. This is a common practice to prevent multiple inclusions of the header file.
#define FT_ABS_H   // If FT_ABS_H is not defined, this line defines it. This ensures that the subsequent code is included only once in the compilation unit.

#define ABS(Value) ((Value < 0) ? - (Value) : (Value))  // This line defines a macro named ABS.

#endif


/* 
  - The macro takes an argument Value, which is the number whose absolute value needs to be calculated.
  - The macro uses a ternary operator (? :) to determine whether Value is negative.
  - If Value is negative, the expression - (Value) is evaluated, which returns the absolute value of Value.
  - If Value is non-negative, the expression (Value) is returned as is.
*/


// main.c

#include <stdio.h>
#include "ft_abs.h"

int  main(void)
{
  printf("%d", ABS(-42));
}
