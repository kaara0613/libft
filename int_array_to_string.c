/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_array_to_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:25:58 by kaara             #+#    #+#             */
/*   Updated: 2025/01/02 14:28:06 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*int_array_to_string(int *arr)
{
	ssize_t	arr_i;
	ssize_t	line_i;
	char	*line;

	arr_i = 1;
	line_i = 0;
	line = (char *)malloc(sizeof(char) * arr_spc_len(arr) + 1);
	if (line == NULL)
		return (NULL);
	while (arr_i <= arr[0])
	{
		ft_memcpy(line + line_i, ft_sitoa(arr[arr_i]),
			sizeof(char) * intlen(arr[arr_i]));
		line_i += intlen(arr[arr_i]);
		if (arr_i != arr[0])
		{
			line_i++;
			line[line_i] = ' ';
		}
		else
			line[line_i + 1] = '\0';
	}
	return (line);
}
