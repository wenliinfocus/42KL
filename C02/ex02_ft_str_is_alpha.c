Files to turn in : ft_str_is_alpha.c
  
/* isalpha() method returns true if all in the input string are alphabetic and there is at least one character.
*/

#include <unistd.h>

int  check_alpha(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z))
  {
    return (1);
  }
  return (0);
}

int  ft_str_is_alpha(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!(check_alpha(str[i])))  // If the current character is not an alphabet (according to the check_alpha function), return 0 (false)
    {
      return (0);
    }
    i++;
  }
  return (1);
}
