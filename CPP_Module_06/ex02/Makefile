# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 17:14:26 by junoh             #+#    #+#              #
#    Updated: 2022/12/03 00:51:21 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC_DIR = .
NAME = ex02
SRCS = ./main.cpp ./Base.cpp ./A.cpp ./B.cpp ./C.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDE = .

all : $(NAME)

.cpp.o:
	$(CXX) -c $(CPPFLAGS) -I $(INCLUDE) -o $@ $< 

$(NAME) : $(OBJS) 
	$(CXX) $(CPPFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re:
	make fclean;
	make all;

.PHONY: clean all fclean re

