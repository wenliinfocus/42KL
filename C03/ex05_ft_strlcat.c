Files to turn in : ft_strlcat.c

/*
The strlcat() function returns the total length of the string that would have been created if there was unlimited space. 
Overall, this function calculates the length of the concatenated string and performs the concatenation while ensuring that the result fits within the specified buffer size. It adheres to the behavior of the standard strlcat function, which concatenates strings and appends the null terminator, without overflowing the destination buffer.
*/

#include <unistd.h>

unsigned int  ft_strlcat(char *dest, char *src, unsigned int size)
{
  unsigned int  dest_size;
  unsigned int  src_size;
  unsigned int  result;

  dest_size = 0;
  while (dest[dest_size] != '\0')  // Calculate the lengths of the destination string (dest) until the null terminator \0 is encountered.
    ++dest_size;
  src_size = 0;
  while (src[src_size]!= '\0')  // Calculate the lengths of the source string (src) until the null terminator \0 is encountered.
    ++src_size;
  result = src_size;  // The result is initialized to the length of the source string (src_size).
  if (size <= dest_size)  // This condition updates the result based on the destination buffer size (size). 
    result += size;
  else
    result += dest_size;
  src_size = 0;
  while (src[src_size] != '\0' && dest_size + 1 < size)  // This loop concatenates characters from the source string src to the destination string dest, ensuring that the resulting string fits within the specified size.
  {
    dest[dest_size] = src[src_size];
    dest_size++;
    src_size++;
  }
  dest[dest_size] = '\0';  //Finally, a null terminator is added to the end of the concatenated string in the destination buffer to ensure it is properly terminated.
  return (result);
}

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
