#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: line_number
 * Return: No return value
*/

void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	temp = current->n + current->next->n;
	current->next->n = temp;
	*head = current->next;
	free(current);
}
