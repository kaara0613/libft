#include <list.h>
#include <stdlib.h>

void    list_int_insert_at(t_list **list, int n, int i)
{
    int     idx;
    t_list  *head;
    t_list  *tmp;

    idx = 0;
    head = *list;
    while (idx <= i)
    {
        head = head->next;
        idx++;
    }
    tmp = head->next;
    head->next = NULL;
    list_int_push(list, n);
    while (head->next != NULL)
        head = head->next;
    head->next = tmp;
}
