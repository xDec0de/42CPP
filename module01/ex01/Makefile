# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danimart <danimart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 16:40:00 by danimart          #+#    #+#              #
#    Updated: 2023/12/27 22:40:28 by danimart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = \
		main.cpp \
		zombieHorde.cpp \
		Zombie.cpp

OBJS := $(SRCS:%.cpp=%.o)

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
