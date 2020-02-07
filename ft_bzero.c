/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 21:48:54 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/07 18:44:42 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t tamanho)
{
	size_t	i;
	char	*frase;

	frase = (char*)s;
	i = 0;
	if (tamanho > 0)
	{
		while (i < tamanho)
		{
			if (i < tamanho)
				frase[i] = '\0';
			i++;
		}
	}
}
