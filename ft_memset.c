/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:55:11 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/22 18:38:34 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t i)
{
	size_t j;
	char *s;

	if(str == NULL)
		return (NULL);
	s = str;
	j = 0;
	while (s[j] != '\0' || j < i)
	{
		if (j < i)
			s[j] = c;
		j++;
	}
	return (str);
}
