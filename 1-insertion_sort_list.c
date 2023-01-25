#include "sort.h"

/**
 * insertion_sort_list -
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *counter, *present, *temp;

	present = *list;
	if (present == NULL || present->next == NULL)
		return;
	counter = present->next->next;
	while (present)
	{
		while (present && present->next && present->n > present->next->n)
		{
			temp = present->next;
			temp->prev = present->prev;
			present->prev = temp->next;
			present->next = temp->next;
			temp->next = present;
			if (*list == present)
				*list = temp;
			print_list(*list);
			present = present->prev->prev;
		}
		present = counter;
		counter = counter->next;
	}
}
