/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:23:53 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/07 19:29:26 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*frase;

	frase = (void *)s;
	i = 0;
	while (frase[i] != '\0')
	{
		if (frase[i] == (char)c)
			return (&frase[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&frase[i]);
	else
		return (0);
}
