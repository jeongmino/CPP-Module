# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junoh <junoh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 17:14:26 by junoh             #+#    #+#              #
#    Updated: 2023/06/16 17:52:32 by junoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

OBJS_DIR	:=	objs/
DEPS_DIR	:=	deps/

SRCS		:=	$(wildcard *.cpp)
OBJS		:=	$(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))
DEPS		:=	$(addprefix $(DEPS_DIR), $(SRCS:.cpp=.d))
NAME		:=	bit

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJS_DIR)%.o : %.cpp
	@mkdir -p $(dir $@)
	@mkdir -p $(DEPS_DIR)
	$(CXX) $(CXXFLAGS) $< -c -o $@ -MMD
	mv $(@:.o=.d) $(DEPS_DIR)

clean:
	$(RM) $(OBJS_DIR)
	$(RM) $(DEPS_DIR)

fclean: clean
	$(RM) $(NAME)

re: | fclean all

.PHONY: all clean fclean re
