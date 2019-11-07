#include "tetromino_generator.h"

int		get_random_int(int lower, int upper)
{
	int	num;

	num = (rand() % (upper - lower + 1)) + lower;
	return (num);
}

void	set_new_xy(int *x, int *y)
{
	int	rnd;

	rnd = get_random_int(0, 3);
	if (rnd == LEFT && *x - 1 >= 0)
		(*x)--;
	else if (rnd == TOP && *y - 1 >= 0)
		(*y)--;
	else if (rnd == RIGHT && *x + 1 < TET_SIZE)
		(*x)++;
	else if (rnd == DOWN && *y + 1 < TET_SIZE)
		(*y)++;
}
