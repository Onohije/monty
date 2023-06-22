#include "monty.h"

/**
 * f_pop - prints the top
 * @head: Pointer to the head of the stack
 * @counter: line_number
 * Return: No return value
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *cur;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	cur = *head;
	*head = cur->next;
	free(cur);
}
