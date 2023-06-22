#include "monty.h"

/**
  *f_sub- Subtracts the top two elements of the stack.
  *@head: pointer to the stack head
  *@counter: line_number
  *Return: No return value
 */

void f_sub(stack_t **head, unsigned int counter)

{
	stack_t *temp = *head;
	int result, node_count;

	for (node_count = 0; temp != NULL; node_count++)
		temp = temp->next;
	if (node_count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	result = temp->next->n - temp->n;
	temp->next->n = result;
	*head = temp->next;
	free(temp);
}
