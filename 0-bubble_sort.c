#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

/**
 * bubble_sort - ascending order array sort of integers
 * @array:Sort an array of integers
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, l = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (a = 0; a < l - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				swap_ints(array + a, array + a + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		l--;
	}
}
