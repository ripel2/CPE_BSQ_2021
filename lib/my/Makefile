##
## EPITECH PROJECT, 2021
## my
## File description:
## Makefile for the my library
##

SRC = my_getnbr.c \
	my_is_letter.c \
	my_is_nbr.c \
	my_isneg.c \
	my_is_prime.c \
	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_putstr_err.c \
	my_revstr.c \
	my_showmem.c \
	my_showstr.c \
	my_show_word_array.c \
	my_sort_int_array.c \
	my_strcapitalize.c \
	my_strcat.c \
	my_strcmp.c \
	my_strcpy.c \
	my_str_isalpha.c \
	my_str_islower.c \
	my_str_isnum.c \
	my_str_isupper.c \
	my_strlen.c \
	my_strlowcase.c \
	my_strncat.c \
	my_strncmp.c \
	my_strncpy.c \
	my_strstr.c \
	my_strupcase.c \
	my_swap.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: build copy_lib copy_header

build:
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

copy_lib:
	cp $(NAME) ../$(NAME)

copy_header:
	mkdir -p ../../include
	cp my.h ../../include/my.h
