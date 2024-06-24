/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaara <kaara@syudent.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:53:08 by kaara             #+#    #+#             */
/*   Updated: 2024/06/22 17:31:39 by kaara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	const unsigned char	*ps;

	pd = (unsigned char *)dest;
	ps = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (0);
	if (ps < pd && pd < ps + n)
	{
		pd += n;
		ps += n;
		while (n--)
			*(--pd) = *(--ps);
	}
	else
	{
		while (n--)
			*pd++ = *ps++;
	}
	return (dest);
}

// int main()
// {
//     char *data = "Hello World";
// 	ft_memmove(data + 2, data, 3);
//     printf("%s\n", data);

//     return 0;
// }
