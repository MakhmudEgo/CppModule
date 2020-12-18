# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizola <mizola@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/01 09:16:47 by mizola            #+#    #+#              #
#    Updated: 2020/11/19 05:25:01 by mizola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	megaphone

SRC =		megaphone.cpp

FLAGS =		clang++ -Wall -Wextra -Werror

OSRC =		$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OSRC)
			$(FLAGS) $(OSRC) -o $(NAME)

%.o:		%.c
			$(FLAGS) -c $< -o $@

clean:
			rm -rf  $(OSRC)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re