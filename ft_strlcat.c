/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:30:46 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/29 22:11:22 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	c;
	size_t	d;

	c = 0;
	j = 0;
	i = ft_strlen(dst);
	if (i >= dstsize)
		return (ft_strlen((char*)src) + dstsize);
	while (dst[j] && j <= (dstsize - 1))
		j++;
	d = j;
	while (src[c] && j < (dstsize - 1) && dstsize > 0)
	{
		dst[j] = src[c];
		j++;
		c++;
	}
	if (d < dstsize)
		dst[j] = '\0';
	return (d + ft_strlen((char*)src));
}
