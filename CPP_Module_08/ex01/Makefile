# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 01:39:47 by junoh             #+#    #+#              #
#    Updated: 2022/12/03 11:30:55 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC_DIR = .
NAME = ex00
SRCS = ./main.cpp ./Span.cpp
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
