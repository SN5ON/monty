#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack
 * @line_number: represents line number of current op
 *
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	int tmp;

	head = *stack;
	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = head->n;
	head->n = head->next->n;
	head->next->n = tmp;
}
