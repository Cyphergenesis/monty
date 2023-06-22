#include "monty.h"
/**
 * _addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void _addnode(stack_t **head, int n)
{

	stack_t *new_node, *au_x;

	au_x = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); 
	}
	if (au_x)
		au_x->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
