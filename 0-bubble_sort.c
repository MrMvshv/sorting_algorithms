#include "sort.h"
/**
  * bubble_sort - sorts array using bubble sort algorithm
  * @array: array to sort
  * @size: size of the array
  *
  * prints array each time swapping is done
  */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp = 0, swap = 1;

	if (size < 2)
		return;

	while (swap == 1)
	{
		swap = 0;
		i = 0;

		while (i < size)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap = 1;
				print_array(array, size);
			}
			else if (array[i] == array[i + 1])
				swap = 1;
			++i;
		}
	}
}
