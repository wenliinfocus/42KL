Files to turn in: ft_strdup.c

/*
Reproduce the behavior of the function strdup (man strdup).

- The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.
- The pointer may subsequently be used as an argument to the function free(3).
- If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/

mkdir ex00
cd ex00
man strup
vim ft_strdup.c

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int  get_len(char *str)
{
  unsigned int  i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

char  *str_cpy(char *str, char *dest)
{
  unsigned int  i;

  i = 0;
  while (str[i] != '\0')
  {
    dest[i] = str[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}

char  *ft_strdup(char *src)
{
  unsigned int  i;
  char *dest;

  i = get_len(src);
  dest = (char *)malloc(sizeof(char) * i);
  if (!(dest))
    return (NULL)
  return (str_cpy(src, dest));
}
