Files to turn in : ft_strcpy.c
	
/* The strncpy() function copies at most n characters from s2 into s1. (including
     the terminating '\0' character).
RETURN VALUES
     The strcpy() and strncpy() functions return s1

src (source string): This is the pointer to the sring to be copied. const char* type of source string ensures that the function will not change the content of the source string.
dest (destination string): This is the pointer to the array where the other string will be copied.
*/

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
