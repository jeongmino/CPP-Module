# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 15:35:16 by junoh             #+#    #+#              #
#    Updated: 2022/11/10 15:35:36 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./ZombieHorde.cpp \
		./Zombie.cpp \
		./main.cpp 

CXX = c++
NAME = ZombieHorde

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