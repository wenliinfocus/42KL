ft_putstr.c

#include <unistd.h>

void    ft_putstr(char *str)
{
    int len;  // Declare an integer value to store the length of the string

    len = 0;  // To initilize the length to 0
    while (str[len] != '\0')  // This condition checks if the character at index len in the string is not '\0'
    {
        write(1, &str[len], 1);  // Arguments: file descriptor 1 (standard output), pointer to the string, and the length of the string.
        len++;  // Increment len to move to the next character in the string.
    }
}

int     main(void)
{
    ft_putstr("who are you");
    return (0);
}
~
