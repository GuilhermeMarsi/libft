/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 21:31:57 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/05 19:20:42 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	char	*a;
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	a = (char*)n;
	p = (char*)h;
	if (ft_strlen(a) == 0)
		return (&p[0]);
	while (i < len && p[i])
	{
		j = 0;
		if (a[j] != p[i])
			i++;
		else
		{
			while (a[j] != '\0' && a[j] == p[i + j] && (i + j) < len)
				j++;
			if (a[j] == '\0')
				return ((char*)&p[i]);
			i++;
		}
	}
	return (NULL);
}
