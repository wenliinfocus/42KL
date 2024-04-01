Files to turn in: ft_strncat.c

/* The strcat() function appends the entire second string to the first, whereas strncat() appends only the specified number of characters in the second string to the first.
The string s1 must have sufficient space to hold the result.
The strncat() function appends not more than n characters from s2, and then adds a terminating '\0'.
*/

#include <unistd.h>

int  get_len(char *str)
{
  unsigned int  i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return (i);
}

char  *ft_strncat(char *dest, char *src, unsigned int nb)  //nb refers to an unsigned integer representing the maximum number of characters to concatenate from the source string.
{
  unsigned int  i;
  unsigned int  k;

  if (nb < 1)  //It checks if the value of nb is less than 1. If it is, it returns dest without performing any concatenation, as there are no characters to concatenate.
  {
  return (dest);
  }
  i = 0;
  k = get_len(dest);
  while (src[i] != '\0' && i < nb)
  {
    dest[k + i] = src[i];
    i++;
  }
  dest[k + i] = '\0';
  return (dest);
}

/*
#include <stdio.h>

int  main()
{
  char dest[20] = "Hello, ";
  char src[] = "World!";
  unsigned int nb = 3;

  ft_strncat(dest, src, nb);  // Concatenating up to nb characters (number of characters) from src to dest using ft_strncat
  printf("Concatenated string: %s\n", dest);
  return (0);
}
*/
