/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 18:49:35 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/03 22:39:20 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_init_variables(int *d, int *c, int *ini)
{
	*d = 0;
	*c = 0;
	*ini = 0;
}

void	ft_finalcaract(int *cc, int *f, char const *setting, char const *str)
{
	*cc = 0;
	while (*f >= 0 && setting[*cc])
	{
		if (str[*f] == setting[*cc])
		{
			*f = *f - 1;
			*cc = -1;
		}
		*cc = *cc + 1;
	}
}

int		ft_initialcaract(char const *str, char const *setting, int *i, int *cc)
{
	int f;

	f = ft_strlen((char*)str) - 1;
	while (str[*i] && setting[*cc])
	{
		if (str[*i] == setting[*cc])
		{
			*i = *i + 1;
			*cc = -1;
		}
		*cc = *cc + 1;
	}
	return (f);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		ini;
	int		fim;
	int		c;
	int		d;

	ft_init_variables(&d, &c, &ini);
	fim = ft_initialcaract(s1, set, &ini, &c);
	if (ini >= fim)
	{
		str = (char*)malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	ft_finalcaract(&c, &fim, set, s1);
	if (!(str = (char*)malloc(sizeof(char) * (fim - ini + 1 + 1))))
		return (NULL);
	while (ini + d <= fim)
	{
		str[d] = s1[ini + d];
		d++;
	}
	str[d] = '\0';
	return (str);
}
