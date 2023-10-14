# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 19:25:12 by mburakow          #+#    #+#              #
#    Updated: 2023/10/13 19:25:59 by mburakow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LDFLAGS = -I./includes

SRC_DIR = scrs
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_DIR = obj
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

HEADERS = $(wildcard includes/*.h)

LIBRARY = libft.a

all: $(LIBRARY)

$(LIBRARY): $(OBJ_FILES)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all

.PHONY: all clean fclean re
