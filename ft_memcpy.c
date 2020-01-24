/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:41:00 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/21 22:17:16 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t i)
{
	size_t j;
	char *dest;
	const char *source;

	if (dst == NULL || src == NULL)
		return (NULL);
	dest = dst;
	source = src;
	j = 0;
	while(source[j] && j < i)
	{
		dest[j] = source[j];
		j++;
	}
	if (i > ft_strlen((char*)source))
		dest[j] = '\0';
	return (dst);
}
