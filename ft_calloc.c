/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:20:58 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/28 20:54:47 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	i;

	i = 0;
	if (count == 0 || size == 0)
		return (NULL);
	ret = malloc(count * size);
	if (ret == NULL)
		return (NULL);
	while (i < count)
	{
		((char*)ret)[i] = 0;
		i += 1;
	}
	return (ret);
}
