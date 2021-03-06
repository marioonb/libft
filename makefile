# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/19 13:40:03 by mbelorge          #+#    #+#              #
#    Updated: 2019/11/25 14:36:21 by mbelorge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c ft_memset.c ft_atoi.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_isdigit.c ft_strncmp.c ft_strchr.c ft_strrchr.c \
ft_isalpha.c ft_isalnum.c ft_strdup.c ft_memcmp.c ft_memcpy.c ft_bzero.c ft_memmove.c ft_memchr.c ft_memccpy.c \
ft_calloc.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_strlcpy.c ft_strlcat.c ft_strjoin.c ft_itoa.c ft_strnstr.c ft_strmapi.c ft_split.c \
ft_substr.c ft_strtrim.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_itoa.c ft_itoa_base_unsigned.c ft_putstr_return.c\
ft_putchar.c ft_putstr.c ft_strlowcase.c ft_strncpy.c ft_strupcase.c ft_itoa_base_pointeur.c ft_putchar_return.c

BONUS = $(SRC) ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c\
ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
ft_lstiter_bonus.c  ft_lstmap_bonus.c

OBJ = $(subst .c,.o,$(SRC))
BONUS_OBJ = $(subst .c,.o,$(BONUS))
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

bonus :
	gcc $(CFLAGS) -c $(BONUS)
	ar rc $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)


$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f $(BONUS_OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
