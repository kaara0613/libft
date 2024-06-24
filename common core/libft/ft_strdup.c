/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:09:29 by kaara             #+#    #+#             */
/*   Updated: 2024/06/24 21:19:08 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*srccpy;
	size_t	size;

	size = ft_strlen(src);
	srccpy = (char *)malloc(size + 1);
	if (!srccpy)
		return (NULL);
	strlcpy(srccpy, src, size + 1);
	return (srccpy);
}
// #include <stdio.h>

// int	main(void)
// {
//     char *copy;
//     char *src =	"hello world";
//     copy = ft_strdup(src);
//     if (copy)
//     {
// 		printf ("%s", copy);
//     	free(copy);
//     }
//     return (0);
// }