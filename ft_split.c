/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 21:41:31 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/05 19:46:21 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_empty_tab(const char *str1, int *iii, char ccc)
{
	while (str1[*iii] == ccc && str1[*iii])
		*iii = *iii + 1;
}

int			ft_suport(int *inic, int *iii, const char *str1, char ccc)
{
	*inic = *iii - 1;
	while (str1[*iii] != ccc && str1[*iii] != '\0')
		*iii = *iii + 1;
	return (0);
}

char		**ft_extract_words(char const *str, char cc, char **txt, int ii)
{
	int ini;
	int	lin;
	int	col;

	lin = 0;
	while (str[ii])
	{
		if (str[ii] != cc)
		{
			col = ft_suport(&ini, &ii, str, cc);
			if (!(txt[lin] = (char*)malloc(sizeof(char) * (ii - ini + 1))))
				return (NULL);
			while (++ini < ii)
			{
				txt[lin][col] = str[ini];
				col++;
			}
			txt[lin][col] = '\0';
			lin++;
		}
		else
			ft_empty_tab(str, &ii, cc);
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
	if (s == 0 || c == 0)
		return (0);
	words = ft_word_count(s, c) + 1;
	if (!(txt1 = (char**)malloc(words * sizeof(char*))))
		return (NULL);
	ft_extract_words(s, c, txt1, i);
	return (txt1);
}
