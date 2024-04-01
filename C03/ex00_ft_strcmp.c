Files to turn in : ft_strcmp.c

/* The strncmp() function compares not more than n characters. 
Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared.
If the strings are equal, it returns 0. */

#include <unistd.h>

int  ft_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')  // Loop through the characters of the strings until reaching the null terminator '\0' of one of the strings.
  {
      i++;
  }
  if (s1[i] == s2[i])
  {
    return (0);  // Return 0 to indicate that the strings are equal.
  }
  else
  {
     // If the loop terminated because a difference was found between the strings, return the difference of the first differing characters.
    return (s1[i] - s2[i])  // This returns a positive value if s1 is lexicographically greater, a negative value if s2 is lexicographically greater, or 0 if they are equal up to that point.
  }
}

/*
#include <stdio.h>

int  main()
{
  char str1[] = "Hello";
  char str2[] = "Hello:;
  char str3[] = "Heallo";
  char str4[] = "World";

  printf("Comparison result for str1 and str2: %d\n", ft_strcmp(str1, str2));
  printf("Comparison result for str1 and str3: %d\n", ft_strcmp(str1, str3));
  printf("Comparison result for str1 and str4: %d\n", ft_strcmp(str1, str4));
  return (0);
}
*/
