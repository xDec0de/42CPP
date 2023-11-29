# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danimart <danimart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 11:35:40 by danimart          #+#    #+#              #
#    Updated: 2023/11/29 11:52:59 by danimart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = \
		main.cpp \
		Contact.cpp \
		PhoneBook.cpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

red: fclean debug

res: fclean sanitize

.PHONY: sanitize debug res red re clean fclean all
