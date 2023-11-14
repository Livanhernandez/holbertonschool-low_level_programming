#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op-add - sums
 * op_sub - return de difrence
 * op_mul - rturn a & b
 * op_div - returns de result of the division
 * op_mod - return the reminder
 * Return: results
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_sub (int a, int b)
{
	return (a - b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
