CC = gcc
CFLAGS = -Wall -Wextra -Werror
ODIR = objs/
SDIR = srcs/
IDIR = ../includes/
NAME = mem.a
FILES = ft_bzero.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memdup.c \
	ft_memmove.c \
	ft_memset.c \
	ft_realloc.c
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(addprefix $(ODIR), $(OBJS))
	@ar rc $@ $^

$(addprefix $(ODIR), %.o): $(addprefix $(SDIR), %.c)
	@printf "."
	@$(CC) $(CFLAGS) -I$(IDIR) -c -o $@ $<

clean:
	@echo "\x1b[31mRemoving the object files of mem.a\x1b[0m"
	@rm -f $(addprefix $(ODIR), $(OBJS))

fclean: clean
	@echo "\x1b[31mRemoving the $(NAME)\x1b[0m"
	@rm -f $(NAME)

re: 
	@$(MAKE) fclean
	@$(MAKE) 
