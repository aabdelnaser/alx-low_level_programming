#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - Addition Function
  * @a: a first declared variable
  * @b: a second declared variable
  *
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Subtraction Function
  * @a: a first declared variable
  * @b: a second declared variable
  *
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplication Function
  * @a: a first declared variable
  * @b: a second declared variable
  *
  * Return: int
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Division Function
  * @a: a first declared variable
  * @b: a second delcared variable
  *
  * Return: int
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
  * op_mod - Modulus Function
  * @a: a first declared variable
  * @b: a seconde declared variable
  *
  * Return: int
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
