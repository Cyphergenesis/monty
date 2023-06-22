#include "monty.h"
/**
  *_rotl- rotates the stack to the top
  *@head: stack head
  *@count: line_number
  *Return: no return
 */
void _rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *au_x;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	au_x = (*head)->next;
	au_x->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = au_x;
}
