# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 14:20:44 by junoh             #+#    #+#              #
#    Updated: 2022/11/10 14:48:40 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./newZombie.cpp \
		./randomZombie.cpp \
		./Zombie.cpp \
		./main.cpp 

CXX = c++
NAME = zombie

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