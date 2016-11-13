#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schapuis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/08/26 13:48:27 by schapuis          #+#    #+#              #
#    Updated: 2013/08/26 15:35:11 by schapuis         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_memalloc.c ft_strsub.c ft_striter.c \
ft_strmap.c ft_putendl.c ft_putstr.c \
ft_strsplit.c ft_putnbr_fd.c ft_strncpy.c \
ft_atoi.c ft_strequ.c ft_putnbr.c ft_strtrim2.c \
ft_putstr_fd.c ft_putendl_fd.c ft_strmapi.c \
ft_strjoin.c ft_striteri.c ft_strtrim.c ft_strclr.c \
ft_strcpy.c ft_strlen.c ft_strdel.c ft_strnequ.c \
ft_itoa.c ft_memset.c ft_strnew.c ft_bzero.c \
ft_memdel.c ft_putchar_fd.c ft_putchar.c ft_memcpy.c ft_memccpy.c \
ft_memmove.c ft_strcmp.c ft_strncmp.c ft_strchr.c ft_strrchr.c \
ft_memchr.c ft_memcmp.c ft_strdup.c ft_strcat.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) ft_memalloc.o ft_strsub.o ft_striter.o \
ft_strmap.o ft_putendl.o ft_putstr.o \
ft_strsplit.o ft_putnbr_fd.o ft_strncpy.o \
ft_atoi.o ft_strequ.o ft_putnbr.o ft_strtrim2.o \
ft_putstr_fd.o ft_putendl_fd.o ft_strmapi.o \
ft_strjoin.o ft_striteri.o ft_strtrim.o ft_strclr.o \
ft_strcpy.o ft_strlen.o ft_strdel.o ft_strnequ.o \
ft_itoa.o ft_memset.o ft_strnew.o ft_bzero.o \
ft_memdel.o ft_putchar_fd.o ft_putchar.o ft_memcpy.o ft_memccpy.o \
ft_memmove.o ft_strcmp.o ft_strncmp.o ft_strchr.o ft_strrchr.o \
ft_memchr.o ft_memcmp.o ft_strdup.o ft_strcat.o
	ranlib $(NAME)

clean:
	/bin/rm -f ft_memalloc.o ft_strsub.o ft_striter.o \
ft_strmap.o ft_putendl.o ft_putstr.o \
ft_strsplit.o ft_putnbr_fd.o ft_strncpy.o \
ft_atoi.o ft_strequ.o ft_putnbr.o ft_strtrim2.o \
ft_putstr_fd.o ft_putendl_fd.o ft_strmapi.o \
ft_strjoin.o ft_striteri.o ft_strtrim.o ft_strclr.o \
ft_strcpy.o ft_strlen.o ft_strdel.o ft_strnequ.o \
ft_itoa.o ft_memset.o ft_strnew.o ft_bzero.o \
ft_memdel.o ft_putchar_fd.o ft_putchar.o ft_memcpy.o ft_memccpy.o \
ft_memmove.o ft_strcmp.o ft_strncmp.o ft_strchr.o ft_strrchr.o \
ft_memcher.o ft_memcmp.o ft_strdup.o ft_strcat.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
