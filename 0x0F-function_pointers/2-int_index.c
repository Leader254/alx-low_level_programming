#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 * Return: the index of the first element for which the cmp funcction
 * does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
			if ((cmp)(array[i]) == 1)
				return (1);
	}
	return (-1);
}
