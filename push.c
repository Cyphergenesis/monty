#include "monty.h"
/**
 * _push - add node to the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void _push(stack_t **head, unsigned int count)
{
	int n, j = 0, fg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				fg = 1;
		}
		if (fg == 1)
		{
		fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{
	fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		_addnode(head, n);
	else
		_addqueue(head, n);
}
