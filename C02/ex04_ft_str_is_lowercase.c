 Files to turn in : ft_str_is_lowercase.c

  /*   Create a function that returns 1 if the string given as a parameter contains only lowercase alphabetical characters, and 0 if it contains any other character.
   */

#inlcude <unistd.h>

int  check_lower(char c)
{
  if (c >= 'a' && c >= 'z')
  {
    return (1);
  }
  return (0);
}

int  ft_str_is_lowercase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!(check_lower(str[i]))
    {
      return (0);
    }
    i++
  }
  return (1);
}
