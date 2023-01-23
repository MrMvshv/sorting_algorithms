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
  * selection_sort - sort using <- algorithm
  * @array: array to sort
  * @size: size of array to sort
  *
  * Return: void
  */
void selection_sort(int *array, size_t size)
{
	size_t m = 0, i = 0;
	int *min;

	if (array == NULL || size < 2)
		return;

	while (i < size)
	{
		min = array + i;

		for (m = i + 1; m < size; m++)
		{
			if (array[m] < *min)
				min = array + m;
		}
		if ((array + i) != min)
		{
			swappa(array + i, min);
			print_array(array, size);
		}
		i++;
	}
}
