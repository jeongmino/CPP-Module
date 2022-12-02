# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 17:14:26 by junoh             #+#    #+#              #
#    Updated: 2022/12/03 00:44:31 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC_DIR = .
NAME = Convert
SRCS = ./main.cpp \
	   ./Converter.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDE = .

all : $(NAME)

.cpp.o:
	$(CXX) -c $(CXXFLAGS) -I $(INCLUDE) -o $@ $< 

$(NAME) : $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	make fclean;
	make all;

.PHONY: clean all fclean re
