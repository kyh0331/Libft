# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykwon <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 15:54:32 by ykwon             #+#    #+#              #
#    Updated: 2020/11/22 22:04:28 by ykwon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

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
