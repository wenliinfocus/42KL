 Files to turn in : ft_str_is_numeric.c

/* Create a function that returns 1 if the string given as a parameter contains only digits, and 0 if it contains any other character.
*/

#include <unistd.h>

int  check_numeric(char c)
{
  if (c >= '0' && c <= '9')
  {
    return (1);
  }
    return (0);
}

int  ft_str_is_numeric(char *str)
{
  int  i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!(check_numeric(str[i]))
    {
      return (0);
    }
    i++;
  }
  return (1);
}

/*
#include <stdio.h>

int main()
{
char str1[] = "1234567890";
char str2[] = "abc123";

printf("Result from str1: %d\n", ft_str_is_numeric(str1));
printf("Result from str2: %d\n", ft_str_is_numeric(str2));
}
*/
