#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: is pointer to int
 * @action: is a pointer to the function
 * @size: is the size of the array
 *
 * Return: Nill.
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
