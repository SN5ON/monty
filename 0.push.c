#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_for_digit - checks that a string only contains digits
 * @arg: string to check
 *
 * Return: 0 if only digits, else 1
 */
static int check_for_digit(char *arg)
{
	int n;

	for (n = 0; arg[n]; n++)
	{
		if (arg[n] == '-' && n == 0)
			continue;
		if (isdigit(arg[n]) == 0)
			return (1);
	}
	return (0);
}

/**
 * m_push - push an integer onto the stack
 * @stack: pointer to pointer to the top node of the stack
 * @line_number: interger for script line number
 *
 */
void m_push(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int i;

	arg = strtok(NULL, "\n\t\r ");
	if (arg == NULL || check_for_digit(arg))
	{
		dprintf(STDOUT_FILENO,
			"L%u: usage: push integer\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	i = atoi(arg);
	if (!add_node(stack, i))
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

}
