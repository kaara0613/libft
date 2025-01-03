/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_intlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:17:30 by kaara             #+#    #+#             */
/*   Updated: 2025/01/03 17:52:11 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	intlen(int src)
{
	ssize_t			len;
	unsigned int	u_src;

	len = 0;
	if (src < 0)
	{
		u_src = (unsigned int)src;
		len++;
	}
	while (src != 0)
	{
		src /= 10;
		len++;
	}
	return (len);
}
