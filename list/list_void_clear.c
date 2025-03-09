#include "../list.h"
#include <stdlib.h>

void	list_clear(t_list *list)
{
    t_list *head;

    if (list == NULL)
    	return ;
    head = list;
    list_clear(head->next);
    if (head->element.str != NULL)
        free(head->element.str);
    else if (head->element.arr != NULL)
        free(head->element.arr);
    free(head);
}