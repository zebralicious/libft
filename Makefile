# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/17 17:50:26 by joaperei          #+#    #+#              #
#    Updated: 2021/02/27 20:27:34 by joaperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC =  ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
        ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
        ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
        ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
        ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
        ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
        ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
        ft_lstsize.c ft_lstnew.c ft_lstadd_front.c ft_lstlast.c \
        ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all