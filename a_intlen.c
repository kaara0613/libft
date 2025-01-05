/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_intlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:17:30 by kaara             #+#    #+#             */
/*   Updated: 2025/01/05 09:53:37 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	intlen(int src)
{
	ssize_t			len;
	unsigned int	u_src;

	len = 0;
	if (src < 0)
		len++;
	u_src = (unsigned int)src;
	while (u_src != 0)
	{
		u_src /= 10;
		len++;
	}
	return (len);
}
