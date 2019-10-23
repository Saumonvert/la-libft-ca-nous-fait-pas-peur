# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 16:09:51 by othabchi          #+#    #+#              #
#    Updated: 2019/10/23 04:16:17 by othabchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_strmapi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
ft_lstnew.c ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c \
ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c

BONUSSRCS = 

GCC = gcc

FLAGS = -Wall -Wextra -Werror

INCLUDE = libft.h

OBJ = $(SRCS:.c=.o)

BONUSOBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $^
		ranlib $(NAME)

bonus: $(BONUSOBJ) $(OBJ)
		ar rc bonus $^
		ranlib bonus

%.o: %.c libft.h
		$(GCC) $(FLAGS) -c $(SRCS) -I $(INCLUDE)

clean:
		rm -rf $(OBJ) $(BONUSOBJ)

fclean: clean
		rm -rf $(NAME)
		
re: fclean all