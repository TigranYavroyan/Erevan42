NAME = libft.a
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address
SRCS = ./srcs/*.c
OBJS = *.o
EXEC = push_swap

all: $(EXEC)

$(EXEC) : $(NAME)
	$(CC) $(CFLAGS) $^ -o $@

$(NAME) : $(OBJS)
	ar -rcs $@ $^

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC) $(NAME)

re: fclean all
