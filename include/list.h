# ifndef LIST_H
#define LIST_H

typedef union s_element t_element;

union s_element {
    int		i;
	int		*arr;
    char	c;
    char	*str;
} ;

typedef struct s_list t_list;

struct s_list
{
    t_list		*next;
    t_element 	element;
} ;

//list
int     list_int_pop(t_list **list);
void    list_push(t_list **list, int n);
void    list_print(t_list *list);
void	list_clear(t_list *list);

#endif