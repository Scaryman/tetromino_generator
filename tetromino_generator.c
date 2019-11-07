#include "tetromino_generator.h"

void	generate_tetromino()
{
	char	tetromino[TET_SIZE][TET_SIZE];
	int		y;
	int		x;
	int		n;

	clear_tetromino(tetromino);
	x = get_random_int(1, TET_SIZE) - 1;
	y = get_random_int(1, TET_SIZE) - 1;
	tetromino[y][x] = FILLED;
	n = 1;
	while (n < TET_SIZE)
	{

		set_new_xy(&x, &y);
		if (tetromino[y][x] != FILLED)
		{
			tetromino[y][x] = FILLED;
			n++;
		}
	}
	print_tetromino(tetromino);
}

void	print_tetromino(char tetromino[TET_SIZE][TET_SIZE])
{
	int	y;
	int	x;

	y = -1;
	while (++y < TET_SIZE)
	{
		x = -1;
		while (++x < TET_SIZE)
			printf("%c", tetromino[y][x]);
		printf("\n");
	}
}

void	clear_tetromino(char tetromino[TET_SIZE][TET_SIZE])
{
	int	y;
	int	x;

	y = -1;
	while (++y < TET_SIZE)
	{
		x = -1;
		while (++x < TET_SIZE)
			tetromino[y][x] = EMPTY;
	}
}

