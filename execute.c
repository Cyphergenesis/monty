#include "monty.h"
/**
* exec - executes the opcode
* @stack: head linked list - stack
* @count: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int exec(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{"sub", _sub},
				{"div", _div},
				{"mul", _mul},
				{"mod", _mod},
				{"pchar", _pchar},
				{"pstr", _pstr},
				{"rotl", _rotl},
				{"rotr", _rotr},
				{"queue", _queue},
				{"stack", _stack},
				{NULL, NULL}
				};
	unsigned int k = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[k].opcode && op)
	{
		if (strcmp(op, opst[k].opcode) == 0)
		{	
			opst[k].f(stack, count);
			return (0);
		}
		k++;
	}
	if (op && opst[k].opcode == NULL)
	{ 
	fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
