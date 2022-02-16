##
## EPITECH PROJECT, 2021
## bsq
## File description:
## Makefile for the bsq bonus
##

NAME = bsq_bonus

SRC = ../src/clear_buffer.c \
	../src/fs_get_number_from_first_line.c \
	../src/mem_alloc_2d_array.c \
	../src/mem_dup_2d_array.c \
	../src/fs_get_map_width.c \
	../src/fs_load_map.c \
	../src/err_malloc.c \
	../src/is_square_of_size.c \
	../src/err_read.c \
	../src/err_open.c \
	../src/fs_free_map.c \
	bonus.c \
	bsq.c

MAIN = ../main.c


all: build

build: make_lib
	gcc -o $(NAME) $(SRC) $(MAIN) -L../lib -lmy

debug-build: make_lib
	gcc -o $(NAME) $(SRC) $(MAIN) -L../lib -lmy -g

clean:
	find . -name "*~" -delete -or -name "#*#" -delete
	find . -name "*.o" -delete
	find . -name "*.gcda" -delete -or -name "*.gcno" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

make_lib:
	cd ../lib/my && make && cd ../..
