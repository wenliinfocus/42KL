Files to turn in : ft_print_params.c

/*
A program that prints its input one word per line.
*/

#include <unistd.h>

void  ft_putchar(char c)
{
  write (1, &c, 1);
}

int  main(int argc, char **argv)
{
  int  i;
  int k;

  i = 1;
  if (argc > 1)
  {
    while (i < argc)
    {
      k = 0;
      while (argv[i][k] != '\0')
      {
        ft_putchar(argv[i][k]);
        k++;
      }
      i++;
      ft_putchar('\n');
    }
  }
  return (0);
}
_____

#include <unistd.h>

int  main(int argc, char *argv[])
{
  int  i;
  int  count;

  count = 0;
  i = -1;
  while (++count < argc)
  {
    while (argv[count][i++] != '\0')
    {
      write (1, &argv[count][i], 1);
    }
    write (1, "\n", 1);
    i = -1;
  }
}
