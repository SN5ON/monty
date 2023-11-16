#include "monty.h"

/**
 * m_pall - Prints the top node of the stack
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: interger representing the line number of script.
 *
 */
void m_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
		{
			return;
		}
	}
}
