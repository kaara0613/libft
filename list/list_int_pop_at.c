#include <list.h>

int list_int_pop_at(t_list **list, int n)
{
    int idx;
    int result;
    t_list  *head;

    idx = 0;
    head = *list;
    while (idx <= n)
    {
        head = head->next;
        idx++;
    }
    result = list_int_pop(&head);
    return (result);
}