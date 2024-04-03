Files to turn in: ft_strdup.c

/*
Reproduce the behavior of the function strdup (man strdup).

- The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.
- The pointer may subsequently be used as an argument to the function free(3).
- If insufficient memory is available, NULL is returned and errno is set to ENOMEM.

The <stdlib.h> header file contains general-purpose functions, macros, and types, such as malloc() , free() , and EXIT_SUCCESS .
*/

mkdir ex00
cd ex00
man strup
vim ft_strdup.c

  
#include <stdlib.h> 

char  *ft_strdup(char *src)
{
  char *dest;
  int  i;

  i = 0;
  while (src[i])
    i++;
  dest = malloc(sizeof(src) * i);
  i = 0;
  if (dest == NULL)
    return (0)
  else
  {
    while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
    dest[i] = '\0';
    return (dest);
  }
}
