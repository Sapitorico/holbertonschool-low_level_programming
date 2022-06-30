#include "3-calc.h"
/**
 * get_op_func - 
 * @s:
 * Return: void
 */
int (*get_op_func(char *s))(int, int)
{
	p_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
	};

 	int i;

	while (s && ops[i].op != 0)
	{
		if (!strcmp(s, ops[i].op))
		{
			return(ops[i].f);
			i++;
		}
	}
	return(NULL);
}
