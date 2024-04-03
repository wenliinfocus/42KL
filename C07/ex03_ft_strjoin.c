Files to turn in: ft_strjoin.c

/*
- Write a function that will concatenate all the strings pointed by strs separated by sep.
- size is the number of strings in strs.
- If size is 0, you must return an empty string that you can free().

Malloc is used for dynamic memory allocation and is useful when you don't know the amount of memory needed during compile time.
*/

#include <stdlib.h>

int  ft_stelen(char *str)
{
  int  len;

  len = 0;
  while (*str)
  {
    len++;
    str++;
  }
  return (len);
}

char  *ft_strcpy(char *dest, char *src)
{
    int  i;

    i = 0;
    while (src[i] != '\0')
    {
      *dest = src[i];
      i++;
      dest++;
    }
    return (dest);
}

int  return_length(int_size, char **strs, int size_sep)
{
  int  i;
  char  *res;
  int  len;

  if (size == 0)
  {
    res = (char*)malloc(1);
    return (res);
  }
  len = return_length(size, strs, ft_strlen(sep));
  i = -1;
  if ((res= malloc(sizeof(char) * (len + 1))) == NULL)
    return (0);
  while (++i < size)
  {
    res = ft_strcpy(res, strs[i]);
    if (i + 1 < size)
      res = ft_strcpy(res, sep);
  }
  *res = '\0';
  return (res - len);
}
  
