/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:43:52 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/07 19:24:40 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_spaces(int *a, const char *str)
{
	while (str[*a] == ' ' || str[*a] == '\t' || str[*a] == '\n' ||
			str[*a] == '\r' || str[*a] == '\v' || str[*a] == '\f')
		*a = *a + 1;
}

int			ft_atoi(const char *str)
{
	int num;
	int sinal;
	int i;

	i = 0;
	sinal = 1;
	num = 0;
	ft_spaces(&i, str);
	if (str[i] != '-' && str[i] != '+' && (!(ft_isdigit(str[i]))))
		return (0);
	if (!(ft_isdigit(str[i])) && (!(ft_isdigit(str[i + 1]))))
		return (0);
	if (str[i] == '-')
		sinal = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		num = num + (str[i] - 48);
		if (ft_isdigit(str[i + 1]))
			num *= 10;
		i += 1;
	}
	return (sinal * num);
}
