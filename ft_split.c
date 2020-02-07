/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 21:41:31 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/07 19:24:05 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ret(const char *fr, int inicial, int final)
{
	char	*string;
	int		i;

	i = 0;
	string = (char*)malloc((final - inicial + 1) * sizeof(char));
	while (final > inicial)
	{
		string[i] = fr[inicial];
		i++;
		inicial++;
	}
	string[i] = '\0';
	return (string);
}

static int		ft_word_count(char const *str, char cc)
{
	int	sn;
	int	w;
	int	ii;

	w = 0;
	ii = 0;
	sn = 0;
	while (str[ii] != '\0' && str[0] != '\0')
	{
		if (str[ii] == cc)
			sn = 0;
		else if (str[ii] != cc && sn == 0)
		{
			w++;
			sn = 1;
		}
		ii++;
	}
	return (w);
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	int		inicial;
	size_t	i;
	size_t	j;

	if (s == 0)
		return (NULL);
	i = -1;
	j = 0;
	inicial = -1;
	split = malloc((ft_word_count(s, c) + 1) * sizeof(char*));
	if (split == 0)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && inicial < 0)
			inicial = i;
		else if ((s[i] == c || i == ft_strlen(s)) && inicial >= 0)
		{
			split[j++] = ret(s, inicial, i);
			inicial = -1;
		}
	}
	split[j] = NULL;
	return (split);
}
