Files to turn in : ft_print_program_name.c

/*
The main function takes two parameters: argc and argv[]. These parameters are used to handle command-line arguments.
- argc (argument count) is an integer that represents the number of arguments passed to the program when it is executed.
- argv[] (argument vector) is an array of strings that contains the actual arguments passed to the program.
In summary, this program simply prints the name of the program (the first command-line argument) followed by a newline character.
*/

#include <unistd.h>

int  main(int argc, char *argv[])
{
  int i;

  (void) argc;   //is used to explicitly state that the argc parameter is not being used in the program. It's a way to avoid getting a compiler warning about unused variables.
  i = -1;
  while (argv[0][++i] != '\0')
  {
    write (1, &argv[0][i], 1);
  }
  write (1, "\n", 1);
  return (0);
}
