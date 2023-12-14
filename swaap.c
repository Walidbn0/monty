#include "monty.h"
/**
 * func_swap - prints the stack
 * @head: stack head
 * @count: no used
 * Return: no return
*/
void func_swaap(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len, auxx;
    len = 0;
    h = *head;
    while (h)
    {
	    h = h->next;
	    len++;
    }
    if (len < 2)
    {
	    fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
	    fclose(bus.file);
	    free(bus.content);
	    free_stack(*head);
	    exit(EXIT_FAILURE);
    }
    h = *head;
    auxx = h->n;
    h->n = h->next->n;
    h->next->n = auxx;
}
