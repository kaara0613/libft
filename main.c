/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:30:52 by kaara             #+#    #+#             */
/*   Updated: 2025/01/08 15:26:33 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
    int n[5] = {4, 13, 244, 443, 44444};
    char *str = int_array_to_string(n);

    for (int i = 0; str[i] != '\n'; i++)
        printf("%c\n", str[i]);
    free(str);
    return (0);
}
