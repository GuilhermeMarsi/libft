/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 21:41:31 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/03 22:40:34 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_extract_words(char const *str, char cc, char **txt, int *ii)
{
	int ini;
	int	lin;
	int	col;

	ini = 0;
	lin = 0;
	col = 0;
	while (str[*ii])
	{
		if (str[*ii] != cc)
		{
			ini = *ii;
			while (str[*ii] != cc && str[*ii] != '\0')
				*ii = *ii + 1;
			if (!(txt[lin] = (char*)malloc(sizeof(char) * (*ii - ini + 1))))
				return (NULL);
			while (ini < *ii)
			{
				txt[lin][col] = str[ini];
				ini = ini + 1;
				col++;
			}
			txt[lin][col] = '\0';
			col = 0;
			lin++;
		}
		else
			while (str[*ii] == cc && str[*ii])
				*ii = *ii + 1;
	}
	txt[lin] = 0;
	return (txt);
}

int			ft_word_count(char const *str, char cc)
{
	int	sn;
	int	w;
	int	ii;

	w = 0;
	ii = 0;
	sn = 0;
	while (str[ii])
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

char		**ft_split(char const *s, char c)
{
	char	**txt1;
	int		words;
	int		j;
	int		i;

	i = 0;
	j = 0;
	words = ft_word_count(s, c) + 1;
	if (!(txt1 = (char**)malloc(words * sizeof(char*))))
		return (NULL);
	ft_extract_words(s, c, txt1, &i);
	return (txt1);
}
