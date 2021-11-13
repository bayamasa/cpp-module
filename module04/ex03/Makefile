# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/13 18:47:47 by ncolomer          #+#    #+#              #
#    Updated: 2021/11/12 17:27:03 by mhirabay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp Character.cpp IMateriaSource.cpp MateriaSource.cpp  
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I. -std=c++98 -pedantic -Wshadow -Wno-shadow

NAME			= a.out

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test
