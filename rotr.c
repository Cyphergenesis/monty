#include "monty.h"
/**
  *_rotr- rotates the stack to the bottom
  *@head: stack head
  *@count: line_number
  *Return: no return
 */
void _rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *cp;

	cp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cp->next)
	{
		cp = cp->next;
	}
	cp->next = *head;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*head)->prev = cp;
	(*head) = cp;
}
