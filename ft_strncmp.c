/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 22:35:27 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/07 19:57:05 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	char		*frase1;
	char		*frase2;

	frase1 = (void *)s1;
	frase2 = (void *)s2;
	i = 0;
	while (i < n)
	{
		if (frase1[i] == '\0' && frase2[i] == '\0')
			return (0);
		if (frase1[i] != frase2[i])
			return ((unsigned char)frase1[i] - (unsigned char)frase2[i]);
		i++;
	}
	return (0);
}
