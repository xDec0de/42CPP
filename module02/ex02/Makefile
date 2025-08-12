# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/09 20:32:00 by daniema3          #+#    #+#              #
#    Updated: 2025/08/12 16:57:52 by daniema3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = operators

SRC_DIR = .
OBJ_DIR = ./objs

CC = c++
CFLAGS =	-Wall -Werror -Wextra \
			-std=c++98 -pedantic \
			-MMD \
			-fdiagnostics-color=always \

SRCS =	Fixed.cpp \
		main.cpp

# > ~ Colors

RED = \e[0;31m
BRED = \e[1;31m
GREEN = \e[1;32m
YLW = \e[0;33m
BYLW = \e[1;33m
BLUE = \e[1;36m
GRAY = \e[0;30m
RES = \e[0m                                                                   

WNAME = $(BYLW)$(NAME)$(YLW)
OKNAME = $(BLUE)$(NAME)$(GREEN)

# > ~ Project compilation

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))

OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@echo -n "\r⏳ $(YLW)Compiling $(notdir $<)$(GRAY)...$(RES)"
	@{\
		ERR=$$( ($(CC) $(CFLAGS) -c $< -o $@) 2>&1 );\
		if [ $$? -ne 0 ]; then\
			echo -n "\r❌ $(RED)Failed to compile $(BRED)$(notdir $<)";\
			echo -n "$(GRAY):$(RES)";\
			echo "\n$$ERR";\
			exit 1;\
		fi;\
	}

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo -n "\r✅ $(OKNAME) $(GREEN)successfully compiled!$(RES)"
	@echo 

# > ~ Clean project files

clean:
	@echo -n "\r⏳ $(YLW)Removing $(WNAME) objs$(GRAY)...$(RES)"
	@rm -rf $(OBJ_DIR)
	@echo -n "\r✅ $(GREEN)Removed $(OKNAME) objs$(GRAY).$(RES)"
	@echo 

fclean: clean
	@echo -n "\r⏳ $(YLW)Removing $(WNAME) executable$(GRAY)...$(RES)"
	@rm -rf $(NAME)
	@echo -n "\r✅ $(GREEN)Removed $(OKNAME) executable\$(GRAY).$(RES)"
	@echo 

# > ~ Clean and compile

re: fclean $(NAME)

.PHONY: all clean fclean re
