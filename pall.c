#include "monty.h"

/**
 * f_pall - Prints all elements of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: unused parameter
 * Return: no return
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current;

	(void)counter;

	current = *head;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	current = current->next;
	}
}
