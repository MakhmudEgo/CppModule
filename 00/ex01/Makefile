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

NAME =	phonebook

SRC =		main.cpp PhoneBook.cpp Contacts.cpp

FLAGS =		-Wall -Wextra -Werror

OSRC =		$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OSRC)
			clang++ $(FLAGS) $(OSRC) -o $(NAME)

%.o:		%.c
			clang++ $(FLAGS) -c $< -o $@

clean:
			rm -rf  $(OSRC)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re