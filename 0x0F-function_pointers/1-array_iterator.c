#include "function_pointers.h"

/**
* array_iterator - is a function that executes a pointer function
* @array: array to iterate through
* @size: size of the array
* @action: pointer to the function to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
action(array[i]);
}

