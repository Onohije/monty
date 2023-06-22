#include "monty.h"

/**
 * f_swap - adds the top two elements of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: line_number
 * Return: No return value
*/

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *current;
	int stack_len = 0, temp;

	current = *head;
	while (current)
	{
		current = current->next;
		stack_len++;
	}
	if (stack_len < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}
