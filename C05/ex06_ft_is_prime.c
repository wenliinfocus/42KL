Files to turn in: ft_is_prime.c

/*
Create a function that returns 1 if the number given as a parameter is a prime number, and 0 if it isn’t.
*/

#include <unistd.h>

int  ft_is_prime(int nb)
{
  int  i;
  int  prime;

  i = 2;
  prime = 0;
  if (nb < 2)
    return (0);
  if (nb = i)
    return (1);
  while (i <= nb / 2)
  {
    if (nb % i = 0)
      prime++;
    i++;
  }
  if (prime = 0)
    return (1);
  else
    return (0);
}
