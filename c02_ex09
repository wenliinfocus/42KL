Files to turn in : ft_strcapitalize.c

/* Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.
*/

#include <unistd.h>

char  *ft_strcapitalize(char *str)
{
  int  i;
  char  c;
  int  new_word;  // Flag to indicate whether the current character is the start of a new word

  i = 0;  // Initialize i to 0, representing the start of the string
  new_word = 1;  // Initialize new_word to 1, indicating the start of a new word
  while (str[i] != '\0')
  {
    c = str[i];  // Store the current character in c
    if (new_word == 1 && c >= 'a' && c <= 'z')  // If the current character is the start of a new word and is a lowercase letter, convert it to uppercase
      str[i] = str[i] - 32;
    else if (new_word == 0 && c >= 'A' && c <= 'Z')  // If the current character is not the start of a new word and is an uppercase letter, convert it to lowercase
      str[i] = str[i] + 32;
    if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')   // Check if the current character indicates the end of a word
      new_word = 1;  // Set new_word to 1 if the current character is not a letter or digit
    else
      new_word = 0;
    i++;  // Move to the next character in the string
  }
  return (str);
}
