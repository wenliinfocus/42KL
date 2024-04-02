Files to turn in: ft_iterative_power.c

/*
- Create an iterated function that returns the value of a power applied to a number.
- A power lower than 0 returns 0.
- Overflows must not be handled.
- We’ve decided that 0 power 0 will returns 1.
*/

#inlcude <unistd.h>

int  ft_iterative_power(int nb, int power)
{
  int  result;

  result = nb;
  if (power < 0)
    return (0);
  if (power == 0)
    return (1);
  whie (power > 1)
  {
    result *= nb;
    power--;
  }
  return (result);
}
