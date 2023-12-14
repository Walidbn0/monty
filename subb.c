#include "monty.h"
/**
  *func_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void func_sub(stack_t **head, unsigned int counter)
{
  stack_t *auxx;
  int suss,nodes;

  auxx = *head;
  for (nodes = 0; auxx != NULL; nodes++)
  auxx = auxx->next;
  if (nodes < 2)
  {
	  fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
	  fclose(bus.file);
	  free(bus.content);
	  free_stack(*head);
	  exit(EXIT_FAILURE);
  }
  auxx = *head;
  suss = auxx->next->n - auxx->n;
  auxx->next->n = suss;
  *head = auxx->next;
  free(auxx);
}
