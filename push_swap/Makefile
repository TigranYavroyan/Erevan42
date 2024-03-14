# NAME = libft.a
# CFLAGS = -Wall -Wextra -Werror
# SRCS = ./srcs/*.c
# MAIN = ./main.c
# OBJS = *.o

# # all: $(EXEC)

# # $(EXEC) : $(NAME)
# # 	$(CC) $(CFLAGS) $^ main.c

# # $(NAME) : $(OBJS)
# # 	ar -rcs $@ $^

# # $(OBJS) : $(SRCS)
# # 	$(CC) $(CFLAGS) -c $^

# # clean:
# # 	rm -f $(OBJS)

# # fclean: clean
# # 	rm -f $(EXEC) $(NAME)

# # re: fclean all

# all: $(EXEC)

# $(EXEC) : $(OBJS)
# 	$(CC) $(CFLAGS) $^

# $(OBJS) : $(SRCS)
# 	$(CC) $(CFLAGS) -c $^

# clean:
# 	rm -f $(OBJS)

# fclean: clean
# 	rm -f $(EXEC)

# re: fclean all

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
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
