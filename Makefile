# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 13:16:35 by daniema3          #+#    #+#              #
#    Updated: 2025/08/11 13:32:14 by daniema3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --no-print-directory

PROJ_ROOT := $(CURDIR)

SUBDIRS := $(shell find $(PROJ_ROOT) -type f -name Makefile ! -path "$(PROJ_ROOT)/Makefile" -exec dirname {} \; | sort -u)

define run
	@for dir in $(SUBDIRS); do \
		echo "📂 Entering $$dir"; \
		$(MAKE) $(1) -C $$dir || exit $$?; \
	done
endef

all:
	$(call run,)

clean:
	$(call run,clean)

fclean:
	$(call run,fclean)

.PHONY: all clean fclean
