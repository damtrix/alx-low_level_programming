/**
 * print_name - a function that prints a name.
 *
 * @name: Character to print
 *
 * @f: a function that return nothing
 *
 * Return: Always return 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
