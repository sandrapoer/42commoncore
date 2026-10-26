NAME = get_next_line.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
BUFFER_SIZE = n #tobe addeed
DFLAG = -D $(BUFFER_SIZE)

SRCS = get_next_line.c get_next_line_utils.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) $(DFLAG) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
