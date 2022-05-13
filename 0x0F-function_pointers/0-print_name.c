#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @f: Function Pointer
 * @name: the name to be printed
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
