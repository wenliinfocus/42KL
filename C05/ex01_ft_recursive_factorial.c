Files to turn in: ft_recursive_factorial.c

// Iterative Approach: It's like climbing a staircase step by step. iterative solutions use loops (like for or while loops)
// Recursive Approach: It's like looking into a set of mirrors. It's like breaking down a big problem into smaller, similar sub-problems, and then solving each sub-problem using the same approach.

/*
Create a recursive function that returns the factorial of the number given as a parameter.
If the argument is not valid the function should return 0.
Overflows must not be handled; the function return will be undefined.
*/

#include <unistd.h>

int  ft_recursive_factorial(int nb)
{
  if (nb < 0)
    return (0);
  else if (nb <= 1)
    return (1);
  else
    return (nb * ft_recursive_factorial(nb - 1));
}
