Files to turn in : ft_str_is_printable.c

/* Create a function that returns 1 if the string given as a parameter contains only printable characters, and 0 if it contains any other character.
The C isprint() function is used to check if a character passed as the argument is a printable character or not.
*/

#include <unistd.h>

int   check_printable(char c)
{
  if (c >= ' ' && c <= '~')
  {
    return (1);
  }
  return (0);
}

int  ft_str_is_printable(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!(check_printable(str[i])
    {
      return (0);
    }
    i++
  }
  return (1);
}
