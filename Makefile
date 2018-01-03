CC=gcc
CFLAGS= -Wall -Wextra -Werror 
NAME=libft.a
FILES=ft_realloc.c ft_lstdelnode.c ft_iswhitespace.c ft_memdup.c ft_lstpushf.c ft_lstaddb.c ft_lstadd.c ft_lstdel.c ft_lstiter.c ft_lstnew.c ft_lstpushb.c ft_lstdelone.c ft_lstmap.c ft_memcmp.c ft_memalloc.c ft_putendl_fd.c ft_strdel.c ft_strncat.c ft_strtrim.c ft_atoi.c ft_memccpy.c ft_putnbr.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_memchr.c ft_putnbr_fd.c ft_strequ.c ft_strncpy.c ft_toupper.c ft_isalnum.c ft_memcpy.c ft_putstr.c ft_striter.c ft_strnequ.c ft_isalpha.c ft_memdel.c ft_putstr_fd.c ft_striteri.c ft_strnew.c ft_isascii.c ft_memmove.c ft_strcat.c ft_strjoin.c ft_strnstr.c ft_isdigit.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strrchr.c ft_isprint.c ft_putchar.c ft_strclr.c ft_strlen.c ft_strsplit.c ft_isspace.c ft_putchar_fd.c ft_strcmp.c ft_strmap.c ft_strstr.c ft_itoa.c ft_putendl.c ft_strcpy.c ft_strmapi.c ft_strsub.c
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: 
	$(MAKE) clean
	$(MAKE) 
