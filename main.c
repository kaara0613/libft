/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:30:52 by kaara             #+#    #+#             */
/*   Updated: 2025/01/06 02:39:18 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
    char *dest;
	char *src;

    dest = (char *)malloc(sizeof(char) * 11);
    dest = "helloworld";

    src = (char *)malloc(sizeof(char) * 11);
    src = "helloworld";

    printf("%ld\n", intlen(INT_MAX));
    printf("%ld\n", hex_intlen(0xffffff));
    printf("%s\n", hex_itoa(0xffffff));
    // printf("%s\n", int_array_to_string(n));
    dest = strjoin_update(dest, src);
    printf("%s", dest);
    return (0);
}
