/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:41:00 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/07 19:11:35 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t i)
{
	size_t		j;
	char		*dest;
	const char	*source;

	dest = dst;
	source = (char*)src;
	j = 0;
	while (j < i && dst != src)
	{
		dest[j] = source[j];
		j++;
	}
	return (dst);
}
