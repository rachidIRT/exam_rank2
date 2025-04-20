#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int n = a;
		while (n > 0)
		{
			if (a % n == 0 && b % n == 0)
			{
				printf("%d", n);
				break;
			}
			--n;
		}
	}
	printf("\n");
	return (0);
}