Files to turn in: ft_strncpy.c

/*  
The strncpy() function copies at most n characters from s2 into s1. 
If s2 is less than n characters long, the remainder of s1 is filled with '\0' characters.  Otherwise, s1 is not terminated.
  RETURN VALUES
     The strcpy() and strncpy() functions return s1.

The C library function char *strncpy(char *dest, const char *src, size_t n) copies up to the n characters from the string pointed to, by src to dest.
In the case whereby the length of src is less than that of n, the remainder of dest will be padded with null bytes.
*/

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
