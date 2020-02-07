/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:45:15 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/07 20:02:31 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;
	size_t	s_len;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	i = 0;
	if (!(ret = malloc((len + 1) * sizeof(char))))
		return (0);
	len = len + start;
	while (start < len && start <= s_len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}
