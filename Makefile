.PHONY: clean fclean re \
	gnl/gnl.a \
	is/is.a \
	lst/lst.a \
	mem/mem.a \
	printf/printf.a \
	put/put.a \
	str/str.a \

NAME = libft.a
TARGETS = gnl/gnl.a \
	is/is.a \
	lst/lst.a \
	mem/mem.a \
	printf/printf.a \
	put/put.a \
	str/str.a \

all: $(NAME)

$(TARGETS):
	@echo "\x1b[36m\nCompiling $(notdir $@)\x1b[0m"
	@$(MAKE) -C $(dir $@) $(notdir $@)
	
$(NAME): $(TARGETS)
	@echo "\x1b[33m\n\nMaking the libft\x1b[0m"
	@ar -qc $@ $^

clean:
	@for lib_dir in $(dir $(TARGETS)); do \
		@$(MAKE) -C $$lib_dir clean; \
	done

fclean:
	@for lib_dir in $(dir $(TARGETS)); do \
		$(MAKE) -C $$lib_dir fclean; \
	done
	@echo "\x1b[31mRemoving the $(NAME)\x1b[0m"
	@rm -f $(NAME)

re: 
	@$(MAKE) fclean
	@$(MAKE) 
