#include "../libft.h"

int main(void)
{
    t_list *list;

    list = NULL;
    list_push(&list, 10);
    list_push(&list, 100);
    list_push(&list, 1000);
    list_push(&list, 10000);
    list_push(&list, 100000);
    list_push(&list, 1000000);
    list_push(&list, 10000000);
    list_push(&list, 100000000);
    list_print(list);
    return (0);
}
