/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:30:46 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/23 20:23:04 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t c;
	size_t d;
	
	c = 0;
	i = ft_strlen(dst);
	d = i;
	if (i >= dstsize - 1)
		return (ft_strlen((char*)src) + dstsize);
	while(c < (dstsize - 1 - d))
	{
		dst[i] = src[c];
		i++;
		c += 1;
	}
	dst[i] = '\0';
	return (d + ft_strlen((char*)src));
}
