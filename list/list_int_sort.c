#include "list.h"
#include "stdlib.h"
#include <stdbool.h>

void    swap(t_list *list);

t_list  *list_int_sort(t_list *list)
{
    t_list *result;

    result = list_int_clone(list);
    swap(result);
    return (result);
}

void    swap(t_list *list)
{
    int     idx;
    t_list  *head;
    bool    swaped;
    
    idx = 0;
    head = list;
    while (head->next != NULL)
    {
        head = list;
        swaped = false;
        while (head->next != NULL)
        {
            if (head->element.i > head->next->element.i)
            {
                list_int_insert_at(&list, list_int_pop_at(&list, idx), idx + 1);
                swaped = true;
            }
            head = head->next;
        }
        if (swaped == true)
            break ;
        head = head->next;
        idx++;
    }
}
