# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: othabchi <othabchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 16:09:51 by othabchi          #+#    #+#              #
#    Updated: 2019/10/30 16:37:49 by othabchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_strmapi.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c

BONUSSRCS = ft_lstnew_bonus.c ft_lstadd_back_bonus.c ft_lstlast_bonus.c \
ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c

GCC = gcc

FLAGS = -Wall -Wextra -Werror

INCLUDE = libft.h

OBJ = $(SRCS:.c=.o)

BONUSOBJ = $(BONUSSRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(GCC) $(FLAGS) -c $(SRCS) -I $(INCLUDE)
		ar rc $(NAME) $^
		ranlib $(NAME)

bonus: $(BONUSOBJ) $(NAME)
ifeq ("$(shell ls -R | grep bonus.o)","")	
	$(GCC) $(FLAGS) -c $(BONUSSRCS) -I $(INCLUDE);
	ar rc $(NAME) $^;
	ranlib $(NAME);
endif

clean:
	rm -rf $(OBJ) $(BONUSOBJ)

fclean: clean
	rm -rf $(NAME) $(bonus)
		
re: fclean all

reb: fclean bonus