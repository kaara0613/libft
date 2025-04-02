#include "list.h"
#include "stdlib.h"

t_list *list_int_clone(t_list *list)
{
    t_list *head;
    t_list *list_clone;

    head = list;
    while (head->next != NULL)
    {
        list_int_push(&list_clone, head->element.i);
        head = head->next;
    }
    return (list_clone);
}
