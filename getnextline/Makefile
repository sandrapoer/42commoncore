# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/02 14:52:36 by spoernba          #+#    #+#              #
#    Updated: 2026/11/02 14:52:38 by spoernba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
BUFFER_SIZE = n
DFLAG = -D BUFFER_SIZE=$(BUFFER_SIZE)
DEPFLAG = -MMD -MP

SRCS = get_next_line.c get_next_line_utils.c
OBJS = ${SRCS:.c=.o}
DEP = ${SRC:.c=.d}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) $(DFLAG) $(DEPFLAG) -c $< -o $@

clean:
	rm -f $(OBJS) $(DEP)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include ${DEP}

.PHONY: all clean fclean re
