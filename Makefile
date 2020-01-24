# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 22:17:26 by gmarsi            #+#    #+#              #
#    Updated: 2020/01/23 21:35:47 by gmarsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = GCC

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC =	main.c			\
		ft_strlen.c		\
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_strlcpy.c	\
		ft_memccpy.c	\
		ft_memmove.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlcat.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strnstr.c	\
		#ft_isalnum.c	\
		#ft_toupper.c	\
		#ft_isalpha.c	\
		#ft_strncmp.c	\
		#ft_atoi.c		\
		#ft_isascii.c	\
		#ft_strdup.c		\
		#ft_isdigit.c	\
		#ft_calloc.c		\
		#ft_isprint.c	\
		#ft_tolower.c

OBJ = 	main.o			\
		ft_strlen.o		\
		ft_memset.o		\
		ft_bzero.o		\
		ft_memcpy.o		\
		ft_strlcpy.o	\
		ft_memccpy.o	\
		ft_memmove.o	\
		ft_memchr.o		\
		ft_memcmp.o		\
		ft_strlcat.o	\
		ft_strchr.o		\
		ft_strrchr.o	\
		ft_strnstr.o	\
		#ft_isalnum.o	\
		#ft_toupper.o	\
		#ft_isalpha.o	\
		#ft_strncmp.o	\
		#ft_atoi.o		\
		#ft_isascii.o	\
		#ft_strdup.o		\
		#ft_isdigit.o	\
		#ft_calloc.o		\
		#ft_isprint.o	\
		#ft_tolower.o

all : $(NAME)

$(NAME): $(OBJ) libft.h
	@echo "Compiling ..."
	ar -r $(NAME) $(OBJ)
	@echo "Done !"

OBJ: $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	@echo "Remove File *.o  ..."
	@/bin/rm -f $(OBJ)
	@echo "Done !"

fclean: clean
	@echo "Remove lib ..."
	@/bin/rm -f $(NAME)
	@echo "Done !"

re: fclean all