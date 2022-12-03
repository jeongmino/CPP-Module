# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 17:14:26 by junoh             #+#    #+#              #
#    Updated: 2022/12/03 15:46:56 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC_DIR = .
NAME = ex02
SRCS = ./main.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)
INCLUDE = .

all : $(NAME)

.cpp.o:
	$(CXX) -c $(CXXFLAGS) -I $(INCLUDE) -o $@ $< -MMD -g

$(NAME) : $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) -fsanitize=address -g

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re:
	make fclean;
	make all;

-include $(DEPS)

.PHONY: clean all fclean re

