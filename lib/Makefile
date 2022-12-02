##
## EPITECH PROJECT, 2022
## -B-MUL-100-TLS-1-1-bsmyradar-alexandre.ricard
## File description:
## Makefile
##

SRC = window_manager.c \
		radar.c \

OBJ = $(SRC:.c=.o)

INCLUDE = my.h

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar rc $(NAME) $(OBJ)
	cp my.h ../include/
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
