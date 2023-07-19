#include "3-calc.h"
/**
* get_op_func -  selects the correct function to perform
*                    the operation asked by the user
*@s: operator that used
*Return: function that make operator or NULL if fails.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0 ; i < 5 ; i++)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
	}
return (NULL);
}
