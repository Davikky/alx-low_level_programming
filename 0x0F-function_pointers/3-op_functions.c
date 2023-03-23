#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adds 2 integers
  * @a: first int
  * @b: second int
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - substracts int b from int a
  * @a: first int
  * @b: second int
  *
  * Return: a-b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies 2 integers
  * @a: first int
  * @b: second int
  *
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - computes quotient of two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: a/b, if b != 0
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
  * op_mod - modulo finder
  * @a: first int
  * @b: second int
  *
  * Return: a%b
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
