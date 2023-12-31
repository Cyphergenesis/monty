#include "monty.h"
/**
 * _mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void _mul(stack_t **head, unsigned int count)
{
	stack_t *h;
	int length = 0, au_x;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	au_x = h->next->n * h->n;
	h->next->n = au_x;
	*head = h->next;
	free(h);
}
