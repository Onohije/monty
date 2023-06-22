#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: pointer to the stack head
 * @counter: line_number
 * Return: No return value
*/

void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	int stack_len = 0, temp;

	while (current)
	{
		current = current->next;
		stack_len++;
	}
	if (stack_len < 2)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	if (current->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = current->next->n % current->n;
	current->next->n = temp;
	*head = current->next;
	free(current);
}
