Files to turn in : ft_strncmp.c

/* The strncmp function compares two strings up to a specified number of characters or until it finds a difference, whichever comes first.
In summary, strcmp compares entire strings, while strncmp allows you to specify the maximum number of characters to compare. 
strncmp is often used when comparing substrings or when you want to limit the comparison to a certain number of characters.
*/

#include <unistd.h>

int  ft_strncmp(char *s1, char *s2, unsigned int n)
{
  int i;

  if (n == 0)
  {
    return (0);
  }
  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)  // Loop through the characters of the strings until one of the strings is exhausted or n characters have been compared
  {
    i++;
  }
  if (s1[i] == s2[i])  // If the loop terminated because both strings are equal (up to n characters)
  {
    return (0);
  }
  else
  {
    return (s1[i] - s2[i]);  // Otherwise, return the difference between the first differing characters
  }
}

/*
#include <stdio.h>

int  main()
{
  char str1[] = "Hello";
  char str2[] = "Hollo";
  char str3[] = "Heolla";
  char str4[] = "World";

  printf("Comparison result for str1 and str2: %d\n", ft_strncmp(str1, str2, 3));
  printf("Comparison result for str1 and str3: %d\n", ft_strncmp(str1, str3, 3));
  printf("Comparison result for str1 and str4: %d\n", ft_strncmp(str1, str4, 5));
  return (0);
}
*/
