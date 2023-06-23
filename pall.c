#include "monty.h"

/**
 * pall - Prints the values in the stack
 * @head: Pointer to the stack's head
 * @counter: Unused parameter
 *
 * Description: This function prints all the values in the stack,
 * starting from the top of the stack.
 *
 * Return: No return value
 */
void pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
