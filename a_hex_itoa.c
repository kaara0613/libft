/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_hex_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:50:42 by kaara             #+#    #+#             */
/*   Updated: 2025/01/03 17:52:01 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *hex_itoa(unsigned int n)
{
	char    *result;



	return (result);
}

ssize_t	hex_intlen(unsigned int n)
{
	ssize_t	len;

	len = 0;
	while (n != 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}
