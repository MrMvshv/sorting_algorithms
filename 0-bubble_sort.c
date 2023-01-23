#include "sort.h"
/**
 * swappa - Swaps two ints in an array.
 * @a: first int
 * @b: second int
 */
void swappa(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
  * bubble_sort - sorts array using bubble sort algorithm
  * @array: array to sort
  * @size: size of the array
  *
  * prints array each time swapping is done
  */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, end = size;
	int swap = 1;

	if (array == NULL || size < 2)
		return;

	while (swap == 1)
	{
		swap = 0;

		for (i = 0; i < end - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swappa(array + i, array + i + 1);
				swap = 1;
				print_array(array, size);
			}
		}
		end--;
	}
}
