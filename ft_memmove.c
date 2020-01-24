/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:15:07 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/22 22:07:24 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;
	size_t i;

	i = 0;
	dest = (char*)dst;
	source = (char*)src;
	while(source[i] != '\0' && i < len)
	{
		dest[i] = source[i];
		i++;
	}
	if (len > ft_strlen(source))
		dest[i] = '\0';
	return (dst);
}
