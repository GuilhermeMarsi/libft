/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:39:59 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/04 22:01:44 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	i = 0;
	while (source[i] != (unsigned char)c && i < n)
	{
		dest[i] = source[i];
		i += 1;
	}
	if (source[i] == (unsigned char)c)
	{
		dest[i] = source[i];
		return (dst + i + 1);
	}
	else
		return (NULL);
}
