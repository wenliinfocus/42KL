Files to turn in : ft_rev_params.c

/* One per line, in the reverse order of the command line.
*/

#include <unistd.h>

void  ft_putchar(char c)
{
  write (1, &c, 1);
}

int  main(int argvc, char **argv)
{
  int  i;
  int  k;

  i = argc - 1;
  while (i > 0)
  {
    k = 0;
    while (argv[i][k] != '\0')
    {
      ft_putchar(argv[i][k]);
      k++;
    }
    i--;
    ft_putchar('\n');
  }
  return (0);
}

_______

#include <unistd.h>

int  main(int argc, char *argv[])
{ 
  int  i;
  int  count;

  count = argc;
  i = -1;
  while (--count > 0)
  {
    while (argv[count][++i] != '\0')
    {
      write (1, &argv[count][i], 1);
    }
    write (1, "\n", 1);
    i = -1;
  }
}
