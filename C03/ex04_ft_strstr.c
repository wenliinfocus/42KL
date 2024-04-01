Files to turn in: ft_strstr.c

/* 
The strstr() function searches for the first occurrence of a string inside another string.
If string2 does not appear in string1, the strstr() function returns NULL.
*/

#include <unistd.h>

char  *ft_strstr(char *str, char *to_find)
{
  unsigned int  i;  // Variable to iterate through the string 'str'
  unsigned int  k;  // Variable to iterate through the substring 'to_find'

  i = 0;
  if (to_find[0] == '\0')  // If the substring is empty, return the original string
  {
    return (str);
  }
  while (str[i] != '\0')
  {
    k = 0;
    while (str[i + k] == to_find[k])  // Check if the substring matches starting from the current position in 'str'
    {
      if (to_find[k + 1] == '\0')  // If the end of the substring is reached, return the current position in 'str'
      {
        return (str + i);
      }
      k++;
    }
    i++;
  }
  return (0);  // Return NULL if the substring is not found in the string
}


/*
#include <stdio.h>  // For printf function
#include <string.h>  // For strstr function

int  main()
{
  char str[] = "The quick brown fox jumps over the lazy dog";
  char to_find1[] = "fox";
  char to_find2[] = "cat";

  char  *result1 = ft_strstr(str, to_find1);  // Searching for the substring to_find1 in str using ft_strstr
  char  *result2 = ft_strstr(str, to_find2);  // Searching for the substring to_find2 in str using ft_strstr

  printf("Result for to_find1: %d\n", result1 != NULL);
  printf("Result for to_find2: %d\n", result2 != NULL);
  return (0);
}
