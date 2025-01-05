/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:30:52 by kaara             #+#    #+#             */
/*   Updated: 2025/01/05 10:57:04 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
int n[5] = {1, 2, 3, 4, 5};

    printf("%ld\n", intlen(INT_MAX));
    printf("%ld\n", hex_intlen(0xffffff));
    printf("%s\n", hex_itoa(0xffffff));
    printf("%s\n", int_array_to_string(n));
    return (0);
}
