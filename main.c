/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:51:21 by gmarsi            #+#    #+#             */
/*   Updated: 2020/02/01 02:45:28 by gmarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"

int main (void)
{	
	char txt1[50] = "Guilherme";
	char txt2[50] = "TesteDeMemSet";
	char txt3[50] = "TesteDeMemSet";
	char txt4[50] = "TesteDeBzero";
	char txt5[50] = "TesteDeBzero";
	char src[20] = "Somos Todos 42 SP !!";
	char dest1[50] = "Testedestring";
	char dest2[50] = "Testedestring";
	char dest3[50] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	char dest4[50] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	char dest5[50] = "Testedestring";
	char dest6[50] = "Testedestring";
	char *ret1;
	char *ret2;
	char txt6[50] = "Teste de Memcmp";
	char txt7[50] = "Teste de Meacmp";
	int	resp1;
	int resp2;
	char dest7[50] = "Testedestring";
	char dest8[50] = "Testedestring";
	char dest9[50] = "Aqui nos ";
	char dest10[50] = "Aqui nos ";

	//FT_STRLEN
	printf("\n>> Numero de caracteres LIBFT.H: %zu", ft_strlen(txt1));
	printf("\n>> Numero de Caracteres STDIO.H: %lu\n", strlen(txt1));

	//FT_MEMSET
	ft_memset(txt2 + 3, '.', 2);
	printf("\n>> Memset LIBFT.H:	%s", txt2);
	memset(txt3 + 3, '.', 2);
	printf("\n>> Memset STRING.H:	%s\n", txt3);

	//FT_BZERO
	ft_bzero(txt4 + 7, 1);
	printf("\n>> Bzero LIBFT.H:	%s", txt4);
	bzero(txt5 + 7, 1);
	printf("\n>> Bzero STRING.H:	%s\n", txt5);
	
	//FT_MEMCPY
	ft_memcpy(dest1, src, 10);
	printf("\n>> Memcpy LIBFT.H:	%s", dest1);
	memcpy(dest2, src, 10);
	printf("\n>> Memcpy STRING.H:	%s\n", dest2);

	//FT_MEMCCPY
	ft_memccpy(dest3, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
	printf("\n>> Memccpy LIBFT.H:	%s", dest3);
	memccpy(dest4, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
	printf("\n>> Memccpy STRING.H:	%s\n", dest4);

	//FT_MEMMOVE
	ft_memmove(dest5, src, 7);
	printf("\n>> Memmove LIBFT.H:	%s", dest5);
	memmove(dest6, src, 7);
	printf("\n>> Memmove STRING.H:	%s\n", dest6);

	//FT_MEMCHR
	ret1 = ft_memchr(src, 'T', 15);
	printf("\n>> Memchr LIBFT.H:	%s", ret1);
	ret2 = memchr(src, 'T', 15);
	printf("\n>> Memchr STRING.H:	%s\n", ret2);

	//FT_MEMCMP
	printf("\n>> Memcmp LIBFT.H:	%d", ft_memcmp(txt6, txt7, 15));
	printf("\n>> Memcmp STRING.H:	%d\n", memcmp(txt6, txt7, 15));

	//FT_STRLCPY
	resp1 = ft_strlcpy(dest7, src, 20);
	printf("\n>> Strlcpy LIBFT.H:	Retorno:	%d	StrDestino:	%s", resp1, dest7);
	resp2 = strlcpy(dest8, src, 20);
	printf("\n>> Strlcpy STRING.H:	Retorno:	%d	StrDestino:	%s\n", resp2, dest8);

	//FT_STRLCAT
	resp1 = ft_strlcat(dest9, src, 35);
	printf("\n>> Strlcat LIBFT.H:	Retorno:	%d	StrDestino:	%s", resp1, dest9);
	resp2 = strlcat(dest10, src, 35);
	printf("\n>> Strlcat STRING.H:	Retorno:	%d	StrDestino:	%s\n", resp2, dest10);

	//FT_STRCHR
	ret1 = ft_strchr("Hello World !!", 'x');
	printf("\n>> Strchr LIBFT.H:	%s", ret1);
	ret2 = strchr("Hello World !!", 'x');
	printf("\n>> Strchr STRING.H:	%s\n", ret2);

	//FT_STRRCHR
	ret1 = ft_strrchr("Hello World !!", 'l');
	printf("\n>> Strchr LIBFT.H:	%s", ret1);
	ret2 = strrchr("Hello World !!", 'l');
	printf("\n>> Strchr STRING.H:	%s\n", ret2);

	//FT_STRNSTR
	ret1 = ft_strnstr("Hello World !!", "llo ", 5);
	printf("\n>> Strnstr LIBFT.H:	%s", ret1);
	ret2 = strnstr("Hello World !!", "llo ", 5);
	printf("\n>> Strnstr STRING.H:	%s\n", ret2);

	//FT_STRNCMP
	printf("\n>> Strncmp LIBFT.H:	%d", ft_strncmp("Hello World", "Hello Word", 15));
	printf("\n>> Strncmp STRING.H:	%d\n", strncmp("Hello World", "Hello Word", 15));

	//FT_ISALPHA
	printf("\n>> Isalpha LIBFT.H:	%d", ft_isalpha('E'));
	printf("\n>> Isalpha CTYPE.H:	%d\n", isalpha('E'));

	//FT_ISDIGIT
	printf("\n>> Isdigit LIBFT.H:	%d", ft_isdigit('G'));
	printf("\n>> Isdigit CTYPE.H:	%d\n", isdigit('G'));
	
	//FT_ISALNUM
	printf("\n>> Isalnum LIBFT.H:	%d", ft_isalnum('$'));
	printf("\n>> Isalnum CTYPE.H:	%d\n", isalnum('$'));

	//FT_ISASCII
	printf("\n>> Isascii LIBFT.H:	%d", ft_isascii('n'));
	printf("\n>> Isascii CTYPE.H:	%d\n", isascii('n'));

	//FT_TOUPPER
	printf("\n>> Toupper LIBFT.H:	%c", ft_toupper('x'));
	printf("\n>> Toupper CTYPE.H:	%c\n", toupper('x'));

	//FT_TOLOWER
	printf("\n>> Tolower LIBFT.H:	%c", ft_tolower('X'));
	printf("\n>> Tolower CTYPE.H:	%c\n", tolower('X'));

	//FT_ATOI
	printf("\n>> Atoi LIBFT.H:	%d", (1 * ft_atoi("\n\n\n  -46\b9 \n5d6")));
	printf("\n>> Atoi STDLIB.H:	%d\n", (1 * atoi("\n\n\n  -46\b9 \n5d6")));

	//FT_ITOA
	printf("\n>> Itoa LIBFT.H:	%s\n", ft_itoa(-2147483648));

	//FT_SPLIT
	//printf("\n>> Itoa LIBFT.H:	%s", 
	ft_split("orem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');

	return 0;
}
