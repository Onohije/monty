#include "monty.h"

/**
  *f_rotr- rotates the stack to the bottom
  *@head: pointer to the stack head
  *@counter: line_number
  *Return: no return value
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cur;

	cur = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = *head;
	cur->prev->next = NULL;
	cur->prev = NULL;
	(*head)->prev = cur;
	(*head) = cur;
}
