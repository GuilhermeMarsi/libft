/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 21:41:31 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/01 03:00:42 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_extract_words(char const *str, char cc, char **txt)
{
	int i;
	int lin;
	int col;

	i = 0;
	lin = 0;
	col = 0;
	while (str[i])
	{
		if (str[i] == cc && col > 0)
		{	
			txt[lin][col] = '\0';
			lin++;
			col = 0;
		}
		else
		{
			txt[lin][col] = str[i];
			col++;
		}
		i++;
	}
	txt[lin][col] = '\0';
	txt[lin] = 0;
}

int		ft_biggest_word(char const *str, char cc)
{
	int	a;
	int	b;
	int	ii;

	a = 0;
	b = 0;
	ii = 0;
	while (str[ii])
	{
		if (str[ii] == cc)
		{	
			b = (a > b) ? a : b;
			a = 0;
		}
		else
			a++;
		ii++;
	}
	if (b == 0 && a > b)
		b = a;
	return (b);
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
	char	**txt;
	int		words;
	int		bw;
	int		j;

	j = 0;
	words = ft_word_count(s, c) + 1;
	bw = ft_biggest_word(s, c) + 1;
	if (!(txt = (char**)malloc(words * sizeof(char*))))
		return (NULL);
	while (j <= words)
	{
		if(!(txt[j] = (char*)malloc(bw * sizeof(char))))
			return (NULL);
		j++;
	}
	ft_extract_words(s, c, txt);
	free(txt);
	return (txt);
}
