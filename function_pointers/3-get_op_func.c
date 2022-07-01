#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - take the correct function for the operation
 * @s:the operation
 * Return: return a pointer to the appropriate function
 */
int (*get_op_func(char *s))(int, int)
{
/*operation function structure*/
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (s && ops[i].op != NULL)
	{
		/*strcmp compare strings character by character*/
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
