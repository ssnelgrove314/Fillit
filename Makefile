NAME := fillit

CC := gcc
CFLAGS += -Wall -Werror -Wextra
CFLAGS += -I.

FILE_NAMES += ft_minos_from_file

SRC := $(addprefix $(FILE_NAMES),.c)
OBJ := $(addprefix $(FILE_NAMES),.o)

LIBFT	= ./libft/libft.a
LIBINC	= -I./libft
LIBLINK = -L./libft -lft

.PHONY: all clean fclean re

all: libft $(NAME) clean

%.o: %.c
	$(CC) $(CFLAGS) $(LIBINC) -c $<

libft: $(LIBFT)

$(LIBFT):
	make -C ./libft

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(LIBLINK) -o $@ $^
	@echo "\n$(NAME) was created.\n"

clean:
	@rm -rf build/

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) has been deleted\n"

re: fclean all
