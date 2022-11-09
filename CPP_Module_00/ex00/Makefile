# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 11:26:16 by junoh             #+#    #+#              #
#    Updated: 2022/10/15 11:38:19 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./megaphone.cpp

CC = clang++
NAME = megaphone

CFLANG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLANG) -o $(NAME) $(OBJS)

clean : 
		rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
