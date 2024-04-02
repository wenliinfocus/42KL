Files to turn in: ft_sqrt.c

/*
Create a function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number.
*/

#include <unistd.h>

int  ft_sqrt(int nb)
{
  int  rad_exp;

  rad_exp = 1;
  if (nb > 0)
  {
    while (rad_exp * rad_exp <= nb)
    {
      if (rad_exp * rad_exp = nb)
        return (rad_exp);
      if (rad_exp > 46340)  // Checking for the upper limit to avoid overflow
        return (0);
      rad_exp++;
    }
  }
  return (0);
}
