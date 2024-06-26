Files to turn in: ft_strcat.c

/*
The strcat() function appends/concatenate/add the entire second string to the first,
whereas strncat() appends only the specified number of characters in the second string to the first.
*/

#include <unistd.h>

char  *ft_strcat(char *dest, char *src)
{
  int i;
  int k;

  i = 0;
  k = 0;
  while (dest[i] != '\0')
  {
  i++;
  }
  while (src[k] != '\0')
  {
    dest[i] = src[k]; // Append each character of the source string to the end of the destination string, and copy the character from src to dest.
    i++;  // Move to the next position in the destination string
    k++;  // Move to the next character in the source string
  }
  dest[i] = '\0';  // Append a null terminator to the end of the concatenated string
  return (dest);  // Return the modified destination string
}

/*
#include <stdio.h>

int  main()
{
  char  dest[20] = "Hello, ";
  char  src[] = "World!";

  ft_strcat(dest, src);

  printf("Concatenated string: %s\n", dest);
  return (0);
}

RESULT: Concatenated string: Hello, World!
*/
