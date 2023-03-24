#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
  * get_op_func - function to perform the operation asked by the user.
  * @s: an operator passed as argument to the program
  *
  * Return: int
  * Name: Ahmed Abdel Nasser
  * ALX Software Engineering Cohort 12
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
