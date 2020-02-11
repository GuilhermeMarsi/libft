/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:45:15 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/10 22:05:29 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size_str;
	size_t	size_sub;
	char	*sub;

	if (s == NULL)
		return (NULL);
	i = 0;
	size_str = ft_strlen(s);
	if (start > size_str)
		start = size_str;
	if (size_str >= start + len)
		size_sub = len;
	else
		size_sub = size_str - start;
	if (!(sub = (char*)malloc(size_sub + 1)))
		return (NULL);
	while (i < size_sub)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[size_sub] = '\0';
	return (sub);
}
