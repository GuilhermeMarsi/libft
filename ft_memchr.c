/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 22:07:45 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/04 22:24:03 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;
	size_t	i;

	string = (char*)s;
	i = 0;
	while (i < n)
	{
		if (string[i] == c)
			return (&string[i]);
		i++;
	}
	return (NULL);
}
