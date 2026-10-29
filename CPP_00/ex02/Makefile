# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/29 21:27:40 by mael-hou          #+#    #+#              #
#    Updated: 2026/07/29 21:27:41 by mael-hou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
SRCS = Account.cpp \
	tests.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Colors
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

# Rules
all: ${NAME}

${NAME}: ${OBJS}
	@${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
	@echo "${GREEN}✓ Account compiled successfully!${RESET}"

%.o: %.cpp
	@${CXX} ${CXXFLAGS} -c $< -o $@
	@echo "$(GREEN)✓ Compiled: $<$(RESET)"

clean:
	@rm -f ${OBJS}
	@echo "${RED}✗ Object files removed${RESET}"

fclean: clean
	@rm -f ${NAME}
	@echo "${RED}✗ Account removed${RESET}"

re: fclean all

.PHONY: all clean fclean re