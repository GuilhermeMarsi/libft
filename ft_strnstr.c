/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 21:31:57 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/23 22:05:19 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *agulha;
	char *palheiro;
	size_t i;
	size_t j;

	if (needle == NULL)
		return ((char*)haystack);
	i = 0;
	j = 0;
	agulha = (char*)needle;
	palheiro = (char*)haystack;
	while (palheiro[i] && i < len)
	{
		while (palheiro[i + j] == agulha[j] && (i + j) < len)
			j++;
		if (j == ft_strlen(agulha))
			return (&palheiro[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
