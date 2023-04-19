#include <stdio.h>
#include <stdlib.h>

/**
* op_add - function adds two numbers
* @a: first number
* @b: second number
*
* Return: result
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - function subs two numbers
* @a: first number
* @b: second number
*
* Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - function muls two numbers
* @a: first number
* @b: second number
*
* Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - function divs two numbers
* @a: first number
* @b: second number
*
* Return: result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - function mods two numbers
* @a: first number
* @b: second number
*
* Return: result
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
