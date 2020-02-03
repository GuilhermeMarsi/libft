/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 21:41:31 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/03 19:30:15 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_extract_words(char const *str, char cc, char **txt)
{
	int ini;
	int i;
	int lin;
	int col;

	i = 0;
	ini = 0;
	lin = 0;
	col = 0;
	while (str[i])
	{
		if (str[i] != cc)
		{
			ini = i;
			while (str[i] != cc && str[i] != '\0')
				i++;
			if(!(txt[lin] = (char*)malloc(sizeof(char) * (i - ini + 1))))
				return(NULL);
			while (ini < i)
			{
				txt[lin][col] = str[ini];
				ini++;
				col++;
			}
			txt[lin][col] = '\0';
			col = 0;
			lin++;
		}
		else
			while (str[i] == cc && str[i])
				i++;
	}
	txt[lin] = 0;
	return (txt);
}

int		ft_word_count(char const *str, char cc)
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

char	**ft_split(char const *s, char c)
{
	char	**txt1;
	int		words;
	int		j;

	j = 0;
	words = ft_word_count(s, c) + 1;
	if (!(txt1 = (char**)malloc(words * sizeof(char*))))
		return (NULL);
	ft_extract_words(s, c, txt1);
	return (txt1);
}
