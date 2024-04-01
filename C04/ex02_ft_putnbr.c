Files to turn in: ft_putnbr.c

/*
Create a function that displays the number entered as a parameter. 
The function has to be able to display all possible values within an int type variable.
For example: ft_putnbr(42) displays “42“.
ft_putnbr functioin : This function takes an integer nb as input and outputs it as a sequence of characters.
*/

#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putnbr(int nb)
{
  if (nb == -2147483648)
  {
    ft_putchar('-');  // Output a minus sign for negative numbers
    ft_putchar('2');  // Output '2' as part of the value (-2147483648)
    nb = 147483648;  // Set nb to the positive value to be handled later
  }
  if (nb < 0)
  {
    ft_putchar('-');   // Output a minus sign for negative numbers
    nb *= -1;  // Convert the negative number to positive
  }
  if (nb >= 10)   // If the number is greater than or equal to 10, recursively call ft_putnbr to handle the digits.
  {
    ft_putnbr(nb / 10);  // Output the higher-order digits first.
    ft_putnbr(nb % 10);   // Output the lower-order digit.
  }
  else
  {
    ft_putnbr(nb + '0');  // If the number is less than 10, output it directly as a character and convert the digit to its character representation and output it
  }
}

/*
#include <stdio.h>

int main (void)
{
	printf("This should be 2147483648\n");
	ft_putnbr(2147483648);
	printf("\nThis should be -2147483648\n");
	ft_putnbr(-2147483648);
	printf("\nThis should be 0");
	ft_putnbr(0);
	printf("\nThis should be 1");
	ft_putnbr(1);
	printf("\nThis should be 42");
	ft_putnbr(42);
	ft_printf("\n");
	return (0);
}
*/
