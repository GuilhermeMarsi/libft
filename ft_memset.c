/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:55:11 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/03 20:29:29 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t i)
{
	size_t			j;
	unsigned char	*s;

	s = (unsigned char*)str;
	j = 0;
	if (i > 0)
	{
		while (j < i)
		{
			s[j] = c;
			j++;
		}
	}
	return (s);
}
