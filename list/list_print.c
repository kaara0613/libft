#include "../libft.h"
#include <stdio.h>

void    list_print(t_list *list)
{
    int     i;
    t_list  *head;

    i = 0;
    head = list;
    if (head == NULL)
        return ;
    while (head->next != NULL)
    {
        printf("%d :", i);
        printf("%d\n", head->element.i);
        head = head->next;
    }
}
