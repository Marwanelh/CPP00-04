# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mael-hou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/19 22:45:22 by mael-hou          #+#    #+#              #
#    Updated: 2026/07/19 22:45:50 by mael-hou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

# Colors
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✓ Megaphone compiled successfully!$(RESET)"

%.o: %.cpp
	@$(CC) $(CPPFLAGS) -c $< -o $@
	@echo "$(GREEN)✓ Compiled: $<$(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(RED)✗ Object files removed$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)✗ Megaphone removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re
