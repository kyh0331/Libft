# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykwon <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 15:54:32 by ykwon             #+#    #+#              #
#    Updated: 2020/11/21 05:43:41 by ykwon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c

OBJ		= $(SRCS:.c=.o)

NAME	= libft.a

all		: $(NAME)

.c.o	:
			gcc -Wall -Werror -Wextra -c $< -o $@ -I ./

$(NAME)	: $(OBJ)
			ar rcs $(NAME) $(OBJ)

clean	:
			rm -f $(OBJ)

fclean	: clean 
			rm -f $(NAME)

re		: fclean all
