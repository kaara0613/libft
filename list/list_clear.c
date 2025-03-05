#include "../libft.h"

void	list_clear(t_list *list)
{
    t_list *head;

    if (list == NULL)
    	return ;
    head = list;
    list_clear(head->next);
    if ()
    free(head);
}