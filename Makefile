##
## EPITECH PROJECT, 2021
## bsq
## File description:
## Makefile for the bsq program
##

NAME = bsq

SRC = src/clear_buffer.c \
	src/fs_get_number_from_first_line.c \
	src/mem_alloc_2d_array.c \
	src/mem_dup_2d_array.c \
	src/fs_get_map_width.c \
	src/fs_load_map.c \
	src/print_map.c \
	src/err_malloc.c \
	src/is_square_of_size.c \
	src/err_read.c \
	src/err_open.c \
	src/fs_free_map.c \
	src/bsq.c

TESTS = tests/tests_mem_dup_2d_array.c \
	tests/tests_fs_get_number_from_first_line.c \
	tests/tests_fs_get_map_width.c \
	tests/tests_error_handling.c \
	tests/tests_fs_load_map.c \
	tests/tests_is_square_of_size.c \
	tests/tests_fs_free_map.c \
	tests/tests_bsq.c

MAIN = main.c

COVERAGE_FLAGS = -fprofile-arcs -ftest-coverage --coverage

all: build

build: make_lib
	gcc -o $(NAME) $(SRC) $(MAIN) -Llib -lmy

debug-build: make_lib
	gcc -o $(NAME) $(SRC) $(MAIN) -Llib -lmy -g

clean:
	find . -name "*~" -delete -or -name "#*#" -delete
	find . -name "*.o" -delete
	find . -name "*.gcda" -delete -or -name "*.gcno" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

make_lib:
	cd lib/my && make && cd ../..

make_tests: clean make_lib
	gcc -o unit_tests $(SRC) $(TESTS) -Llib -lmy -lcriterion $(COVERAGE_FLAGS)

tests_run: make_tests
	./unit_tests
