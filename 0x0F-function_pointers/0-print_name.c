#include "function_pointers.h"

/**
  * print_name - This function callsback another function to
  * print a name
  * @name: The name to be printed
  * @f: The pointer to the function
  *
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
