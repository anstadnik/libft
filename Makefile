.PHONY: clean fclean re \
	gnl \
	is \
	lst \
	mem \
	printf \
	put \
	str \
	math \

NAME = libft.a
TARGETS = gnl \
	is \
	lst \
	mem \
	printf \
	put \
	str \
	math \

OBJS = get_next_line.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
ft_isdigit.o ft_isprint.o ft_isspace.o ft_iswhitespace.o \
ft_lstadd.o ft_lstaddb.o ft_lstdel.o ft_lstdelnode.o \
ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o \
ft_lstpushb.o ft_lstpushf.o ft_lsttostr.o ft_bzero.o \
ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
ft_memcpy.o ft_memdel.o ft_memdup.o ft_memmove.o \
ft_memset.o ft_realloc.o ft_printf.o printf_caesar.o \
printf_char.o printf_fill_list.o printf_flags_hand.o printf_funcs.o \
printf_get_params.o printf_int.o printf_make_str.o printf_memory.o \
printf_parse.o printf_parse2.o printf_process_conv.o printf_ptr.o \
printf_row_str.o printf_str.o printf_time.o ft_putchar.o \
ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o \
ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_atoi.o \
ft_itoa.o ft_strcat.o ft_strchr.o ft_strclr.o \
ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o \
ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o \
ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o \
ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnequ.o \
ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o \
ft_strsrch.o ft_strstr.o ft_strsub.o ft_strtrim.o \
ft_tolower.o ft_toupper.o ft_abs.c ft_pow.c \

all: $(NAME)

$(TARGETS):
	@echo "\x1b[36m\nCompiling $@\x1b[0m"
	@$(MAKE) -C $@
	
$(NAME): $(TARGETS)
	@echo "\x1b[33m\n\nMaking the libft\x1b[0m"
	@ar -qc $@ ./objs/*.o

clean:
	@for lib_dir in $(TARGETS); do \
		$(MAKE) -C $$lib_dir clean; \
	done

fclean: clean
	@echo "\x1b[31mRemoving the $(NAME)\x1b[0m"
	@rm -f $(NAME)

re: 
	@$(MAKE) fclean
	@$(MAKE) 
