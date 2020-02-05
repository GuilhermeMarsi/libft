/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:15:07 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/04 22:14:08 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source;
	size_t				i;

	i = 0;
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	if (source < dest)
	{
		while (++i <= len)
			dest[len - i] = source[len - i];
	}
	else
	{
		while (i < len && dst != src)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
