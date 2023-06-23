#include "monty.h"

stack_t *stack = NULL;

/**
 * main - Entry point of the Monty interpreter
 *
 * Description: This program serves as an interpreter for Monty ByteCodes file
 * It reads Monty byte code instructions from a file and executes them.
 *
 * Return: Always 0.
 */
int main(void)
{
	push(1);
	push(2);
	push(3);
	pall();

	return (0);
}
