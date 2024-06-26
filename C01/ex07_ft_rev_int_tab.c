ft_rev_int_tab.c

#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;  // Declare a variable to keep track of the current position in the array
    int element;  // Declare a variable to temporarily store array elements during swapping

    i = 0;  // Initialize i to 0, representing the start of the array

    while (i < size / 2) // While loop to iterate through the first half of the array to ensure we only iterate until the midpoint of array
    {
    /* Swap the elements at position i and size - i - 1 in the array
    This effectively reverses the order of elements in the array
    */
        element = tab[i];  // Store the order of elements in the array
        tab[i] = tab[size - i - 1];  //This effectively reverses the order of elements in the array
        tab[size - i - 1] = element;  // Replace the element at the enf of the array with the previous stored element
        i++;
    }
}
