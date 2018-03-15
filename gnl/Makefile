CC = gcc
CFLAGS = -Wall -Wextra -Werror
ODIR = objs/
SDIR = srcs/
IDIR = ../includes/
NAME = gnl.a
FILES = get_next_line.c
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(addprefix $(ODIR), $(OBJS))
	@ar rc $@ $^

$(addprefix $(ODIR), %.o): $(addprefix $(SDIR), %.c)
	@printf "."
	@$(CC) $(CFLAGS) $(addprefix -I , $(IDIR)) -c -o $@ $<

clean:
	@echo "\x1b[31mRemoving the object files of gnl.a\x1b[0m"
	@rm -f $(addprefix $(ODIR), $(OBJS))

fclean: clean
	@echo "\x1b[31mRemoving the $(NAME)\x1b[0m"
	@rm -f $(NAME)

re: 
	@$(MAKE) fclean
	@$(MAKE) 
