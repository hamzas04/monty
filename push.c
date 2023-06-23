#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @head: Pointer to the stack's head
 * @n: The value to be pushed onto the stack
 *
 * Description: This function pushes an element with the given value onto
 *
 * Return: No return value
 */
void push(stack_t **head, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
}
