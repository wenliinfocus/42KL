Files to turn in: ft_ultimate_range.c

/*
Create a function ft_ultimate_range which allocates and assigns an array of ints. This int array should contain all values between min and max.
Min included – max excluded.
*/

#include <stdlib.h>

int  ft_ultimate_range(int **range, int min, int max)
{
  int  *tab;
  int  i;

  if (min >= max)
  {
    *range = NULL;
    return (0);
  }
  tab = (int*)malloc(sizeof(*tab) * (max - min));
  if (tab == NULL)
    return (-1);
  else
  {
    i = -1;
    while (++i < max - min)
      tab[i] = min + i;
    *range = tab;
    return (i);
  }
}


#include <stdio.h>

int  ft_ultimate_range(int **range, int min, int max)

int  main(void)
{
    int  i;
    int  *tab;
    int  min;
    int  max;
    int  size;

    min = 0;
    max = 5;
    size = ft_ultimate_range(&tab, min, max);
    if (tab != NULL)
    {
      i = -1;
      while (++i < max - min)
      {
        printf("%d\n", tab[i];
      }
    }
    else
        printf("tozz");
}
