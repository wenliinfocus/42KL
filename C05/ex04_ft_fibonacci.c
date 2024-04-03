Files to turn in: ft_fibonacci.c

/*
In case of fibonacci series, next number is the sum of previous two numbers for example 0, 1, 1, 2, 3, 5, 8, 13, 21 etc.
In summary, the function ft_fibonacci calculates the Fibonacci number at a given index using recursion, returning -1 for invalid indexes, 0 for index 0, and 1 for index 1, and the actual Fibonacci number for other indexes.

- Create a function ft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index. We’ll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2.
- Overflows must not be handled; the function return will be undefined.
- Obviously, ft_fibonacci has to be recursive.
- If the index is less than 0, the function should return -1.
*/

#include <unistd.h>

int  ft_fibonacci(int index)
{
  int  val;

  if (index < 0)
    return (-1);  // Returns -1 if the index is negative (not a valid Fibonacci index). This is because Fibonacci sequence starts with index 0, and negative indexes are not valid.
  if (index == 0)
    return (0);  // Returns 0 if the index is 0 (This is because the first Fibonacci number is 0)
  if (index == 1)
    return (1);  // Returns 1 if the index is 1 (This is because the second Fibonacci number is 1)
  else
  {
    val = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);  // Recursively calculates Fibonacci number for given index. This recursive calculation continues until it reaches the base cases (index 0 or 1), where it returns 0 or 1 respectively.
    return (val);
  }
}
