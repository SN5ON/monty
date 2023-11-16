#include "monty.h"

/**
 * f_add - add node to the stack
 * @stack: pointer to pointer to new node
 * @line_number: represents line number
 *
 */
void m_add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int total = 0, i = 0;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}

	if (stack == NULL || (*stack)->next == NULL || i <= 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	total = (*stack)->next->n + (*stack)->n;
	m_pop(stack, line_number);

	(*stack)->n = total;
}
