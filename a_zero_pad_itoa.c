/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_zero_pad_itoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:40:14 by kaara             #+#    #+#             */
/*   Updated: 2025/01/03 17:52:20 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*zero_pad_itoa(int n, ssize_t size)
{
	ssize_t	nums_zero;
	char	*n_str;
	char	*result;

	nums_zero = size - intlen(n);
	result = calloc(size + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_itoa(n_str);
	ft_strlcpy(result + nums_zero, n_str, size + 1);
	free(n_str);
	return (result);
}
