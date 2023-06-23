#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @value: The value to be pushed onto the stack
 *
 * Description: This function adds a new node with the given value
 * to the top of the stack.
 */
void push(int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;

	if (stack == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = stack;
		stack->prev = new_node;
	}

	stack = new_node;
}
