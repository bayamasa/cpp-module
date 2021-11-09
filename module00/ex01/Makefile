# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/13 18:47:47 by ncolomer          #+#    #+#              #
#    Updated: 2021/11/09 20:26:04 by mhirabay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= a.out
SRCS			= my_awesome_phonebook.cpp Phonebook.cpp Contact.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic -I. -g -fsanitize=undefined -fsanitize=integer

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o ${NAME} $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
