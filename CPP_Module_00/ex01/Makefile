# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 19:43:14 by junoh             #+#    #+#              #
#    Updated: 2022/11/09 20:50:39 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./PhoneBook.cpp\
		./Contact.cpp\
		./main.cpp

CC = clang++
NAME = phonebook

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