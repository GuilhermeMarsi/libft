/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 21:52:00 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/31 20:58:30 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_special_case(int *nn)
{
	char	*txt;

	if (*nn != -2147483648)
		return (NULL);
	else
	{
		txt = (char*)malloc(12 * sizeof(char));
		txt[0] = '-';
		txt[1] = '2';
		txt[2] = '1';
		txt[3] = '4';
		txt[4] = '7';
		txt[5] = '4';
		txt[6] = '8';
		txt[7] = '3';
		txt[8] = '6';
		txt[9] = '4';
		txt[10] = '8';
		txt[11] = '\0';
	}
	return (txt);
}

void	ft_initialize_values(int *mm, int *nn, int *ii)
{
	*ii = (*nn == 0) ? 1 : 0;
	while (*mm != 0)
	{
		*ii = *ii + 1;
		*mm /= 10;
	}
	*ii = (*nn < 0) ? *ii + 2 : *ii + 1;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		m;

	m = n;
	if (ft_special_case(&n) != NULL)
		return (ft_special_case(&n));
	ft_initialize_values(&m, &n, &i);
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	m = 1;
	n = (n < 0) ? n *= -1 : n;
	while (m < i)
	{
		str[i - m - 1] = ((n % 10) + '0');
		n /= 10;
		m++;
	}
	if (str[0] == '0' && i > 2)
		str[0] = '-';
	str[i - 1] = '\0';
	return (str);
}
