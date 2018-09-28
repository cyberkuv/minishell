# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eonwe <eonwe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/19 16:20:57 by eonwe             #+#    #+#              #
#    Updated: 2018/09/25 08:09:28 by eonwe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compiler
TAG = gcc

#name
NAME = minishell

#flags
CFLAGS = -Wall -Wextra -Werror

# Content Folders
LIB_DIR = ./libft/

#Source Files
SRC_FILES = header.c\
			shell_main.c\
			built_ins.c\

# Stating when to focus compilation and clean up
LIBFT = $(addprefix $(LIB_DIR), libft.a)
OBJ = $(SRC_FILES:.c=.o)

all : $(NAME)

#compilation
$(NAME):
	@$(TAG) -c $(CFLAGS) $(SRC_FILES)
	@make -C ./libft/
	@$(TAG) -o $(NAME) $(OBJ) $(LIBFT) -lreadline
	@echo "\033[33;1m=====Successfully Compilled=====\033[33;0m"
	@echo "\033[36;1m========Library Created=========\033[36;0m"
	@echo "\033[32;1m================================\033[32;0m"

rc :
	@make re
	@make clean

# Deleting After compiling
clean :
	@/bin/rm -rf $(OBJ)
	@/bin/rm -rf ./libft/*.o
	@echo "\033[32;1m================================\033[31;0m"
	@echo "\033[31;1m=======Object fls Deleted=======\033[31;0m"

# Deleting Library
fclean : clean
	@/bin/rm -rf $(NAME)
	@/bin/rm -rf ./libft/*.a
	@echo "\033[34;1m==========Lib Deleted===========\033[31;0m"
	@echo "\033[32;1m================================\033[32;0m"

# Clean up
re : fclean all

# Security
.PHONY : $(NAME), all, clean, fclean, re
