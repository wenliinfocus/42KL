Files to turn in: ft_atoi.c

/*
Write a function that converts the initial portion of the string pointed by str to its int representation.
The string can start with an arbitrary amount of white space (as determined by isspace(3)).
The string can be followed by an arbitrary amount of + and – signs, – sign will change the sign of the int returned based on the number of – is odd or even.
Finally the string can be followed by any numbers of the base 10.
Your function should read the string until the string stop following the rules and return the number found until now.
You should not take care of overflow or underflow. result can be undefined in that case.

atoi is a function in the C programming language that converts a string into an integer numerical representation. atoi stands for ASCII to integer.
*/

#include <unistd.h>

int  ft_atoi(char *str)
{
  int  result;  // Variable to store the final integer value
  int  sign;  // Variable to store the sign of the integer
 
  result = 0;
  sign = 1;
  while (*str == 32 || (*str >= 9 && *str <= 13))   // Skip any leading whitespace characters (space, tab, newline, etc.)
    str++;
  while (*str == '-' || *str == '+')  // Handle the sign of the integer (+/-)
  {
    if (*str == '-')
      sign *= -1;  // Toggle the sign if a '-' character is encountered
    str++;
  }
  while (*str >= '0' && *str <= '9')  // Convert the string representation of the integer to an actual integer value
  {
    result = result * 10 + *str - '0';  // Multiply the current result by 10 and add the numerical value of the current character
    str++;
  }
  return (result * sign);  // Apply the sign to the final result and return it
}
