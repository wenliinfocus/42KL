Files to turn in: ft_recursive_power.c

/*
- Create a recursive function that returns the value of a power applied to a number.
- A power lower than 0 returns 0.
- Overflows must not be handled.
- We’ve decided that 0 power 0 will returns 1.
*/

#include <unistd.h>

int  ft_recursive_power(int nb, int power)
{
  int  result;

  result = nb;
  if (result > result * nb)
    return (0);
  else if (power > 1)
    return (result * ft_recursive_power(result, power - 1));
  else if (power == 0)
    return (1);
  else if (power < 0)
    return (0);
  else
    return (result);
}
