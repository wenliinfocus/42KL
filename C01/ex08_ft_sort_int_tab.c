ft_sort_int_tab.c

#include <unistd.h>

void	swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

// function to sort an array of integer in ascending order
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;  // Variable to keep track of the outer loop index
	int	j;  // Variable to keep track of the inner loop index

	i = 1;  // Initialize i to 1 (assuming the first element is already considered sorted)
	while (i < size)  // Iterate through the array starting from the second element
	{
		j = i;
/* Inner loop to compare adjacent element and swap them if necessary
*/
		while (j > 0 && *(tab + j - 1) > *(tab + j))  // This loop ensures that the current element is moved to its correct position and stored portion of the array
		{
			swap(tab + j, tab + j - 1);  // Call the swap function to swap the current element with its predecessor
			j--;  // Decrement j to move to the previous element and continue comparing
		}
		i++;  // Move to the next element in the outer loop
	}
}
