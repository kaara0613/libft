/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_strjoin_update.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:52:16 by kaara             #+#    #+#             */
/*   Updated: 2025/01/06 02:45:02 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strjoin_update(char **dest, const char *src)
{
	char		*tmp;
	ssize_t		cpy_size;

	tmp = ft_strjoin(dest, src);
	if (tmp == NULL)
		return (NULL);
	free(dest);
	dest = NULL;
	cpy_size = ft_strlen(dest) + ft_strlen(src) + 1;
	*dest = (char *)malloc(sizeof(char) * cpy_size);
	if (*dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, cpy_size);
	free(tmp);
	return (dest);
}
