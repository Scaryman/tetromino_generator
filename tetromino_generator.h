#ifndef TETROMINO_GENERATOR_TETROMINO_GENERATOR_H
# define TETROMINO_GENERATOR_TETROMINO_GENERATOR_H
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define TET_SIZE 4
# define LEFT 0
# define TOP 1
# define RIGHT 2
# define DOWN 3
# define FILLED '#'
# define EMPTY '.'

void	generate_tetromino();
void	print_tetromino(char tetromino[TET_SIZE][TET_SIZE]);
void	clear_tetromino(char tetromino[TET_SIZE][TET_SIZE]);
int		get_random_int(int lower, int upper);
void	set_new_xy(int *x, int *y);
#endif
