#include <stdio.h>
#include "monty.h"

/**
 * pall - Prints all the values on the stack
 *
 * Description: This function prints all the values on the stack,
 * starting from the top of the stack.
 */
void pall(void)
{
	stack_t *current = stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
