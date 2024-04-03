Files to turn in: ft.h

/* Create your ft.h file. 

#ifndef, #define, and #endif:
- These are preprocessor directives used for include guards. 
- They prevent the contents of the header file from being included multiple times in the same compilation unit, which could lead to redefinition errors.
*/


#ifndef FT_H  // checks if the identifier FT_H is not defined.
#define FT_H  // defines the identifier FT_H to prevent the subsequent code from being included if FT_H is defined.

void  ft_putchar(char c);
void  ft_swap(int *a, int *b);
void  ft_putstr(char *str);
int  ft_strlen(char *str);
int  ft_strcmp(char *s1, char *s2);  // This function is likely used to compare two strings.

#endif  // marks the end of the conditional inclusion block.
