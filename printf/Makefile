.PHONY: clean, fclean, re

CC = gcc
CFLAGS =  -Wall -Wextra -Werror -Wconversion
ODIR = objs/
SDIR = srcs/
IDIR = ../includes/
NAME = printf.a
FILES = ft_printf.c \
	printf_char.c \
	printf_fill_list.c \
	printf_funcs.c \
	printf_get_params.c \
	printf_int.c \
	printf_make_str.c \
	printf_parse.c \
	printf_process_conv.c \
	printf_ptr.c \
	printf_str.c \
	printf_parse2.c \
	printf_flags_hand.c \
	printf_time.c \
	printf_row_str.c \
	printf_caesar.c \
	printf_memory.c
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(addprefix $(ODIR), $(OBJS))
	@ar rc $@ $^

$(addprefix $(ODIR), %.o): $(addprefix $(SDIR), %.c)
	@printf "."
	@$(CC) $(CFLAGS) -I$(IDIR) -c -o $@ $<

clean:
	@echo "\x1b[31mRemoving the object files\x1b[0m"
	@rm -f $(addprefix $(ODIR), $(OBJS))

fclean: clean
	@echo "\x1b[31mRemoving the $(NAME)\x1b[0m"
	@rm -f $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE)