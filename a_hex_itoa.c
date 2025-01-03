/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_hex_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:50:42 by kaara             #+#    #+#             */
/*   Updated: 2025/01/03 18:33:31 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*hex_itoa(unsigned int n)
{
	ssize_t		len;
	char		*result;
	const char	chars[] = "0123456789ABCDEF";

	len = hex_intlen(n);
	result = (char *)malloc(sizeof(char) * (len + 3));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	while (n >= 0)
	{
		result[len] = chars[n % 16];
		n /= 16;
		len--;
	}
	result[0] = '0';
	result[1] = 'x';
	return (result);
}
