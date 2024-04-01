Files to turn in : ft_strlcat.c

/*
The strlcat() function returns the total length of the string that would have been created if there was unlimited space. 
*/

#include <unistd.h>

unsigned int  ft_strlcat(char *dest, char *src, unsigned int size)
{
  int n;   // Index to iterate through the destination string
  int m;   // Index to iterate through the source string
  int o;   // Length of the destination string
  int p;   // Length of the source string

  n = -1;   // Initialize 'n' to -1
  m = 0;
  o = -1;
  p = -1;
  while (src[++p] != '\0'){}   // Calculate the length of the source string ('src')
  while (dest[++o] != '\0'){}   // Calculate the length of the destination string ('dest')
  while (dest[++n] != '\0')   // Move 'n' to the end of the destination string
    size--;   // Decrease 'size' for each character in the destination string
  while (size != 0)   // Concatenate characters from the source string to the destination string
  {
    while (src[m] != '\0')  // Iterate through the characters of the source string
    {
      if (dest[n] == '\0')  // If the end of the destination string is reached, add characters from the source string
      {
        dest[n++] = src[m++];  // Copy character from 'src' to 'dest'
        size--;  // Decrease 'size' after each character is copied
        if (size == 0)
          break;   // Break the loop if 'size' reaches 0
      }
    }
    dest[n - 1] = '\0';  // Add null terminator at the end of the concatenated string
  }
  return (o + p);  // Return the total length of the concatenated string
}

/*
#include <string.h>
#include <stdio.h>

int  main(void)
{
  int a;
  int b;
  char arr1[] = "kekw";
  char arr2[] = "kekw";
  char arr3[] = "kekw";

  a = ft_strlcat(arr1, arr2, 2);
  b = ft_strlcat(arr3, arr2, 2);
  printf("my func: %s\n", arr1);
  printf("sys func: %s\n", arr3);
  printf("my func: %d\n", a);
  printf("my func: %d\n", a);
  return (0);
}
*/

/*
#include <stdio.h> // For printf function

int main() 
{
    char dest[20] = "Hello";
    char src[] = ", World!";
    unsigned int size = 20;

    // Concatenating src to dest using ft_strlcat
    unsigned int result = ft_strlcat(dest, src, size);

    // Printing the concatenated string and the result
    printf("Concatenated string: %s\n", dest);
    printf("Resulting length: %u\n", result);

    return 0; // Return 0 to indicate success
}
*/
