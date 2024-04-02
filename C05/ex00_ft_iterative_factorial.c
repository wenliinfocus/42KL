Files to turn in: ft_iterative_factorial.c

// Iterative Approach: It's like climbing a staircase step by step. iterative solutions use loops (like for or while loops)
// Recursive Approach: It's like looking into a set of mirrors. It's like breaking down a big problem into smaller, similar sub-problems, and then solving each sub-problem using the same approach.

/*
Create an iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter.
If the argument is not valid the function should return 0.
*/

#include <unistd.h>

int  ft_iterative_factorial(int nb)
{
  int  result;

  result = 1;
  if (nb < 0)
    return (0);
  else if (nb <= 1)
    return (result);
  while (nb > 0)
  {
    result *= nb;
    nb--;
  }
  return (result);
