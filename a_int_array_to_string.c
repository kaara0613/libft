/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_int_array_to_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:25:58 by kaara             #+#    #+#             */
/*   Updated: 2025/01/06 18:31:41 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static ssize_t	arr_spc_len(int *arr);

char	*int_array_to_string(int *arr)
{
	ssize_t	arr_i;
	char	*tmp;
	char	*line_tmp;
	char	*line;

	arr_i = 1;
	tmp = NULL;
	line = (char *)malloc(sizeof(char) * (arr_spc_len(arr) + 1));
	if (line == NULL)
		return (NULL);
	line_tmp = line;
	while (arr_i <= arr[0])
	{
		tmp = ft_itoa(arr[arr_i]);
		if (tmp == NULL)
			return (free(line), free(tmp), NULL);
		ft_memcpy(line, tmp, sizeof(char) * ft_strlen(tmp));
		line += ft_strlen(tmp);
		*(line++) = ' ';
		arr_i++;
		free(tmp);
	}
	*(--line) = '\0';
	return (line_tmp);
}

static ssize_t	arr_spc_len(int *arr)
{
	ssize_t	arr_i;
	ssize_t	string_len;

	arr_i = 1;
	string_len = 0;
	while (arr_i <= arr[0])
	{
		string_len += intlen(arr[arr_i]);
		arr_i++;
	}
	string_len += arr[0] - 1;
	return (string_len);
}
