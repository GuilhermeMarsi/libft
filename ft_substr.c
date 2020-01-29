/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:45:15 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/28 21:02:19 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!(substr = malloc(len * sizeof(char))))
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start - 1 + i];
		i++;
	}
	return (substr);
}
