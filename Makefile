# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykwon <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 15:54:32 by ykwon             #+#    #+#              #
#    Updated: 2020/11/20 17:54:11 by ykwon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c

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
