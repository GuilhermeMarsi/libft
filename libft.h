/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:57:28 by gmarsi            #+#    #+#             */
/*   Updated: 2020/01/23 21:33:40 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

size_t			ft_strlen(char *str);
void			*ft_memset(void *str,int c, size_t i);
void			ft_bzero(void *str, size_t i);
void			*ft_memcpy(void *dst, const void *src, size_t i);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char 			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
