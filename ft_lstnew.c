/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 22:21:42 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/06 18:34:02 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lista;

	if (!(lista = malloc(sizeof(t_list))))
		return (0);
	lista->content = content;
	lista->next = NULL;
	return (lista);
}
