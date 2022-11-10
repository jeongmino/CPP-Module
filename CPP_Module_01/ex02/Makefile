# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 15:35:16 by junoh             #+#    #+#              #
#    Updated: 2022/11/10 15:44:58 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./main.cpp 

CXX = c++
NAME = ThisIsBrain

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean :
		rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all