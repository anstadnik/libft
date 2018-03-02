.PHONY: clean, fclean, re

CC=gcc
CFLAGS= -Wall -Wextra -Werror
ODIR=objs/
SDIR=srcs/
IDIR=includes/
NAME=libft.a
FILES= is/ft_isalnum.c is/ft_isalpha.c is/ft_isascii.c is/ft_isdigit.c is/ft_isprint.c is/ft_isspace.c is/ft_iswhitespace.c lst/ft_lstadd.c lst/ft_lstaddb.c lst/ft_lstdel.c lst/ft_lstdelnode.c lst/ft_lstdelone.c lst/ft_lstiter.c lst/ft_lstmap.c lst/ft_lstnew.c lst/ft_lstpushb.c lst/ft_lstpushf.c lst/ft_lsttostr.c mem/ft_bzero.c mem/ft_memalloc.c mem/ft_memccpy.c mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memcpy.c mem/ft_memdel.c mem/ft_memdup.c mem/ft_memmove.c mem/ft_memset.c mem/ft_realloc.c print/ft_putchar.c print/ft_putchar_fd.c print/ft_putendl.c print/ft_putendl_fd.c print/ft_putnbr.c print/ft_putnbr_fd.c print/ft_putstr.c print/ft_putstr_fd.c str/ft_itoa.c str/ft_strcat.c str/ft_strchr.c str/ft_strclr.c str/ft_strcmp.c str/ft_strcpy.c str/ft_strdel.c str/ft_strdup.c str/ft_strequ.c str/ft_striter.c str/ft_striteri.c str/ft_strjoin.c str/ft_strlcat.c str/ft_strlen.c str/ft_strmap.c str/ft_strmapi.c str/ft_strncat.c str/ft_strncmp.c str/ft_strncpy.c str/ft_strnequ.c str/ft_strnew.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strsplit.c str/ft_strsrch.c str/ft_strstr.c str/ft_strsub.c str/ft_strtrim.c str/ft_tolower.c str/ft_toupper.c math/ft_atoi.c math/ft_ceil.c math/ft_floor.c math/ft_pow.c math/ft_trunc.c
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(addprefix $(ODIR), $(OBJS))
	@echo "\n\x1b[33mMaking the libft\x1b[0m"
	@ar rc $@ $^

$(addprefix $(ODIR), %.o): $(addprefix $(SDIR), %.c)
	@/bin/echo -n "."
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
