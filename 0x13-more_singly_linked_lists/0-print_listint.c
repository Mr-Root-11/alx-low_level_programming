#include "lists.h"

/**
 *
 * print_listint print all element to stdout
 * @h: pointer to a singly linked list.
 * Return : an int 
 *
**/
size_t print_listint(cons listint_t *h)
{
	const listint_t *tp;
	unsigned int cntr = 0;
	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
