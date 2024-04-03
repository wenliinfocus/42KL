Files to turn in: ft_range.c

/*
Create a function ft_range which returns an array of ints. This int array should contain all values between min and max.
Min included – max excluded.
*/

#include <stdlib.h>

int  *ft_range(int min, int max)
{
  int  *tab;
  int  i;

  if (min >= max)
    return (NULL);
  tab = (int*)malloc(sizeof(*tab) * (max - min));
  if (tab == NULL)
    return (NULL);
  else
  {
    i = -1;
    while (++i < max - min)
      tab[i] = min + i;
    return (tab);
  }
}


#include <stdio.h>

int  *ft_range(int min, int max)

int  main(void)
{
    int  i;
    int *tab;
    int  min;
    int  max;

    min = 0;
    max = 5;
    tab = ft_range(min, max);
    if (tab != NULL)
    {
      i = -1;
      while (++i < max - min_
      {
        printf("%d\n", tab[i]);
      }
    }
    else
      printf("tozz");
}
