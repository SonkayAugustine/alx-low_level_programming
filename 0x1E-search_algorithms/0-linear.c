#include "search_algos.h"

/**
 * linear_search - searches for a value in the array using linear search Algo
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: fisrt index where value is located, otherwise -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
size_t s;
int tmp;

if (array != NULL)
{
for (s = 0; s < size; s++)
{
tmp = array[s];
printf("Value checked array[%lu] = [%d]\n", s, tmp);
if (tmp == value)
return (s);
}
}
return (-1);
}
