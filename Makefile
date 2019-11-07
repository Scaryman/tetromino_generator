NAME = tetromino_generator

SRCS = main.c tetromino_generator.c utils.c

INCLUDE = -I tetromino_generator.h

OBJ = $(subst .c,.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c
	gcc -Wall -Wextra -Werror $(INCLUDE) $< -c -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
