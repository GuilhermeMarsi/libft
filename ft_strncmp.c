/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 22:35:27 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/29 21:09:14 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
		{
			if ((str1[i] - str2[i]) > 0)
				return (1);
			else
				return (-1);
		}
	}
	if (str1[i] != str2[i] && i != n)
		return (str1[i] - str2[i]);
	return (0);
}
