#include "sort.h"

/**
 * insertion_sort_list - Insertion sort
 *
 * @list: linked list
 *
 */

void insertion_sort_list(listint_t **list)

{
	listint_t *listt = NULL, *current = NULL, *aux = NULL;

	if (!list || !*list)
		return;

	listt = *list;
	if (listt->next == NULL)
		return;

	while (listt->next != NULL)
	{
		current = listt->next;
		if (listt->n > current->n)
		{
			aux = listt;
			while (aux != NULL && aux->n > current->n)
			{
				aux->next = current->next;
				if (aux->next != NULL)
				{
					aux->next->prev = aux;
				}
				current->prev = aux->prev;
				if (current->prev != NULL)
				{
					current->prev->next = current;
				}
				else
				{
					*list = current;
				}
				aux->prev = current;
				current->next = aux;
				print_list(*list);
				aux = current->prev;
			}
			continue;
		}
		listt = listt->next;
	}
}
