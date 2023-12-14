#include "monty.h"
/**
 * func_pint - prints the top
 * @head: stack head
 * @countr: line_number
 * Return: no return
*/
void func_pint(stack_t **head, unsigned int countr)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", countr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
