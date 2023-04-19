/**
* print_name - function prints name by calling the function pointer f
* @name: pointer to string represent name
* @f: function pointer to the function that will be called
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
