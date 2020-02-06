# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 22:17:26 by gmarsi            #+#    #+#              #
#    Updated: 2020/02/05 22:30:27 by gmarsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = GCC

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC =	ft_strlen.c		\
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
		ft_strncmp.c	\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_split.c		\

SRC_B =	ft_lstnew.c	\
		ft_lstadd_front.c	\
		ft_lstsize.c	\
		ft_lstlast.c	\
		ft_lstadd_back.c	\
		ft_lstdelone.c	\
		ft_lstclear.c	\
		ft_lstiter.c	\
		ft_lstmap.c		\
		
OBJ =	$(subst .c,.o,$(SRC))

OBJ_B =	$(subst .c,.o,$(SRC_B))

all : $(NAME)

$(NAME): $(OBJ) libft.h
	@echo "Compiling ..."
	@ar -r $(NAME) $(OBJ)
	@echo "Done !"

OBJ: $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)

bonus: $(OBJ_B)

$(OBJ_B):
	@$(CC) $(CFLAGS) -c $(SRC_B) $(SRC)
	@ar rc $(NAME) $(OBJ_B) $(OBJ)
	@ranlib $(NAME)

clean:
	@echo "Remove File *.o  ..."
	@/bin/rm -f $(OBJ) $(OBJ_B)
	@echo "Done !"

fclean: clean
	@echo "Remove lib ..."
	@/bin/rm -f $(NAME)
	@echo "Done !"

re: fclean all
