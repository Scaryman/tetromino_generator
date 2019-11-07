#include "tetromino_generator.h"

int		main(int argc, char **argv)
{
	int	num;
	int	n;

	srand(time(0));
	if (argc > 1)
	{
		if ((num = atoi(argv[1])) > 0)
		{
			n = -1;
			while (++n < num)
			{
				generate_tetromino();
				if (n < num - 1)
					printf("\n");
			}
		}
	}
	return 0;
}
