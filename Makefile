##
## EPITECH PROJECT, 2022
## -B-MUL-100-TLS-1-1-bsmyradar-alexandre.ricard
## File description:
## Makefile
##

SRC = main.c \

OBJ = $(SRC:.c=.o)

NAME = my_radar

CFLAGS = -I./include -Wall -Wextra -Werror -g3

LDFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/
	gcc -c $(SRC) $(CFLAGS)
	gcc -o $(NAME) $(OBJ) -L./lib/ -lmy $(LDFLAGS)
	make clean

clean:
	make clean -C lib/
	rm -f $(OBJ)

fclean: clean
	make fclean -C lib/
	rm -f $(NAME)

re: fclean all
