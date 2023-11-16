#include "monty.h"

/**
 * f_pop - adds a node to top stack'
 * @stack: pointer to pointer to head of stack
 * @line_number: line number of current op
 *
 * Return: void
 */
void f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *pop = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = pop->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(pop);
}
