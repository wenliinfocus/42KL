Files to turn in : ft_strupcase.c

/* Create a function that transforms every letter to uppercase.
  */

#include <unistd.h>

char *ft_startupcase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')   // Loop through the characters of the string until reaching the null terminator '\0'
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;  // Convert the lowercase letter to uppercase by subtracting 32 (the difference between the ASCII values of lowercase and uppercase letters)
    }
    i++;
  }
  return (str);
}
