#include "sort.h"
#include <stdio.h>
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
  * shell_sort - ascend list using shell sort Knuth sequence
  * @array: array to sort
  * @size: size of array
  *
  */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1;


	while (1)
	{
		gap = (gap * 3) + 1;
		if (gap > size)
		{	gap /= 3;
			break;
		}
	}

	while (gap)
	{
		/**for (i = gap; i < size; ++i)
		*{
		*}*/
		printf("%ld\n", gap);
		gap /= 3;
	}
	printf("array digit - %d, %ld\n", *array, size);
}
