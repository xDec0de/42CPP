# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 13:16:35 by daniema3          #+#    #+#              #
#    Updated: 2025/08/11 19:38:46 by daniema3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --no-print-directory

PROJ_ROOT := $(CURDIR)

SUBDIRS := $(shell find $(PROJ_ROOT) -type f -name Makefile ! -path "$(PROJ_ROOT)/Makefile" -exec dirname {} \; | sort -u)

RED = \e[0;31m
BRED = \e[1;31m
GREEN = \e[1;32m
YLW = \e[0;33m
GRAY = \e[0;30m
RES = \e[0m                                                                     

define run
	@errors=0; \
	for dir in $(SUBDIRS); do \
		name=$$(realpath --relative-to="$(PROJ_ROOT)" $$dir); \
		printf "\r⏳ $(YLW)%s %s$(GRAY)...$(RES)" "$(1)" "$$name"; \
		output=$$(mktemp); \
		if ! $(MAKE) $(2) -C $$dir > $$output 2>&1; then \
			echo "\r❌ $(RED)Error in $(BRED)$$name$(RES)"; \
			cat $$output; \
			errors=$$((errors+1)); \
		fi; \
		rm -f $$output; \
	done; \
	if [ $$errors -gt 0 ]; then \
		echo "\r❌ $(RED)Completed with $$errors error(s)$(RES)"; \
		exit 1; \
	else \
		echo "\r✅ $(GREEN)All done successfully$(RES)"; \
	fi
endef

all:
	$(call run,Compiling,)

re:
	$(call run,Recompiling,re)

clean:
	$(call run,Cleaning,clean)

fclean:
	$(call run,Fully cleaning,fclean)

.PHONY: all re clean fclean
