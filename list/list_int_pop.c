#include "list.h"
#include "list.h"
#include <stdlib.h>

int list_int_pop(t_list **list)
{
	t_list  *head;
	int     result;
	
	head = *list;
	*list = (*list)->next;
	result = head->element.i;
	free(head);
	return (result);
}