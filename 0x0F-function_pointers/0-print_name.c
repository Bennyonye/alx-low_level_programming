#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a pointer to a function
 * @name: The name to be printed
 * @print_func: The pointer to the printing function
 * Return: void
 **/
void print_name(char *name, void (*print_func)(char *))
{
	if (name == NULL || print_func == NULL)
		return;

	print_func(name);
}
