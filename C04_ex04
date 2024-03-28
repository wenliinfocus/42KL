Files to turn in: ft_putnbr_base.c

/*
Create a function that displays a number in a base system in the terminal.
This number is given in the shape of an int, and the radix in the shape of a string of characters.
The base-system contains all useable symbols to display that number:
- 0123456789 is the commonly used base system to represent decimal numbers
- 01 is a binary base system
- 0123456789ABCDEF an hexadecimal base system
- poneyvif is an octal base system

The function must handle negative numbers
If there’s an invalid argument, nothing should be displayed. Examples of invalid arguments:
- base is empty or size of 1
- base contains the same character twice
- base contains + or –
*/

#inlcude <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

int  check_base(char *base)
{
  int   i;

  i = 0;
  while (base[i] != '\0')  // Iterate through the characters of the base
  {
    if (base[i]] == '+' || base[i] == '-' || base[i] == base[i + 1])  // Check for invalid characters or duplicate characters in the base
      return (0);
    i++;
  }
  if (i <= 1)   // Check if the base has less than 2 characters (invalid base)
    return (0);
  return (1);  // Return 1 if the base is valid
}

void  print_base_nb(int nbr, char *base, int size)  // Function to print a number in a given base
{
  char  a;
  unsigned int n;

  if (nbr < 0)  // Handle negative numbers
  {
    write(1, "-", 1);
    n = nbr * (-1);
  }
  else
    n = nbr;
  if (n >= (unsigned int)size)  // Recursively print digits in the given base
    print_base_nb(n / size, base, size);
  a = base[n % size];
  write(1, &a, 1);
}

void  ft_putnbr_base(int nbr, char *base)  // Main function to print a number in a given base if the base is valid
{
  int s;

  s = 0;
  if (check_base(base) == 1)  // Check if the base is valid
  {
    while (base[s] != '\0')  // Calculate the size of the base
      s++;
    print_base_nb(nbr, base, s);  // Print the number in the given base
  }
}
