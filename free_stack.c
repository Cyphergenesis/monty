#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *au_x;

	au_x = head;
	while (head)
	{
		au_x = head->next;
		free(head);
		head = au_x;
	}
}
