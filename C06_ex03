Files to turn in : ft_sort_params.c

/* Create a program that displays its given arguments sorted by ascii order. It should display all arguments, except for argv[0].
*/

#include <unistd.h>

void  ft_putchar(char c)
{
  write (1, &c, 1);
}

int  ft-strcmp(char *str1, char *str2)
{
  int  i;

  i = 0;
  while (str1[i] == str2[i] && str1[i] != '\0'')
    i++;
  return (str1[i] - str2[i]);
}

void  ft_print_args(int argc, char **argv)
{
  int  i;
  int  k;

  i = 1;
  while (i <argc)
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

int  main(int argc, char **argv)
{
  int  i;
  int  k;
  char *arg;

  i = 1;
  while (i <argc)
  {
    k = i;
    while (ft_ftrcmp(argv[k], argv[k - 1]) < 0 && k > 1)
    {
      arg = argv[k - 1];
      argv[k - 1] = argv[k];
      argv[k] = argl
      k--;
    }
    i++;
  }
  ft_print_args(argc, argv);
  return (0);
}
