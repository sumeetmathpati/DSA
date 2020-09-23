// Function returns the fibonacci numer at give position

#include <stdio.h>
#include <stdlib.h>

int map[100];

int fib(int n)
{

	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	if (map[n - 1] != -1 && map[n - 2] != -1)
	{
		map[n] = map[n - 1] + map[n - 2];
		return map[n];
	}
	else
	{
		if (map[n - 1] == -1)
		{
			{
				map[n - 1] = fib(n - 1);
			}

			if (map[n - 2] == -1)
			{
				map[n - 2] == fib(n - 2);
			}

			map[n] = map[n - 1] + map[n - 2];
			return map[n];
		}
	}
}

int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 2) {
		printf("invalid input");
		return 1;
	}

	for (int i = 0; i < 100; i++)
	{
		map[i] = -1;
	}

	map[0] = 0;
	map[1] = 1;

	printf("Fobonacci number at %d is %d", atoi(argv[1]), fib(atoi(argv[1])));

	return 0;
}