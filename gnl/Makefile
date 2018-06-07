.PHONY: clean fclean re
CC = gcc
CFLAGS = -Wall -Wextra -Werror
ODIR = ../objs/
SDIR = srcs/
IDIR = ../includes/
NAME = gnl
FILES = get_next_line.c

ifeq ($(shell uname), Linux)
	ESCAPE := \033
else
	ESCAPE := \x1b
endif
OBJS = $(FILES:.c=.o)

all: $(addprefix $(ODIR), $(OBJS))

$(addprefix $(ODIR), %.o): $(addprefix $(SDIR), %.c)
	@printf "."
	@$(CC) $(CFLAGS) $(addprefix -I , $(IDIR)) -c -o $@ $<

clean:
	@echo "$(ESCAPE)[31mRemoving the object files of $(NAME)$(ESCAPE)[0m"
	@rm -f $(addprefix $(ODIR), $(OBJS))

fclean: clean

re: 
	@$(MAKE) fclean
	@$(MAKE) 
