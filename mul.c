#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/

void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	int stack_len = 0, temp;

	while (current)
	{
		current =current->next;
		stack_len++;
	}
	if (stack_len < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	temp = current->next->n * current->n;
	current->next->n = temp;
	*head = current->next;
	free(current);
}
