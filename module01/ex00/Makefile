# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 16:40:00 by danimart          #+#    #+#              #
#    Updated: 2025/08/08 17:48:02 by daniema3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

SRC_DIR = .
OBJ_DIR = ./objs

CC = c++
CFLAGS =	-Wall -Werror -Wextra \
			-std=c++98 -pedantic \
			-MMD \
			-fdiagnostics-color=always \

SRCS =	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp

# > ~ Colors

RED = \033[0;31m
BRED = \033[1;31m
GREEN = \033[1;32m
YLW = \033[0;33m
BYLW = \033[1;33m
BLUE = \033[1;36m
GRAY = \033[0;30m
RES = \033[0m                                                                   

WNAME = $(BYLW)$(NAME)$(YLW)
OKNAME = $(BLUE)$(NAME)$(GREEN)

# > ~ Project compilation

SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))

OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@printf "\r⏳ $(YLW)Compiling $(notdir $<)$(GRAY)...$(RES)"
	@{\
		ERR=$$( ($(CC) $(CFLAGS) -c $< -o $@) 2>&1 );\
		if [ $$? -ne 0 ]; then\
			printf "\r❌ $(RED)Failed to compile $(BRED)$(notdir $<)";\
			printf "$(GRAY):$(RES)";\
			printf "\n%s\n" "$$ERR";\
			exit 1;\
		fi;\
	}

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "\r✅ $(OKNAME) $(GREEN)successfully compiled!$(RES)"
	@echo 

# > ~ Clean project files

clean:
	@printf "\r⏳ $(YLW)Removing $(WNAME) objs$(GRAY)...$(RES)"
	@rm -rf $(OBJ_DIR)
	@printf "\r✅ $(GREEN)Removed $(OKNAME) objs$(GRAY).$(RES)"
	@echo 

fclean: clean
	@printf "\r⏳ $(YLW)Removing $(WNAME) executable$(GRAY)...$(RES)"
	@rm -rf $(NAME)
	@printf "\r✅ $(GREEN)Removed $(OKNAME) executable\$(GRAY).$(RES)"
	@echo 

# > ~ Clean and compile

re: fclean $(NAME)

.PHONY: all clean fclean re
