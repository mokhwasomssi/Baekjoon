#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);

	if (N % 5 == 0)
		printf("%d", N / 5);

	else if (N % 5 == 1)
	{
		if (N - 5 > 0)
			printf("%d", N / 5 - 1 + 2);
		else
			printf("-1");
	}
	
	else if (N % 5 == 2)
	{
		if (N - 10 > 0)
			printf("%d", N / 5 - 2 + 4);
		else
			printf("-1");
	}

	else if (N % 5 == 3)
		printf("%d", N / 5 + 1);

	else if (N % 5 == 4)
	{
		if (N - 5 > 0)
			printf("%d", N / 5 - 1 + 3);
		else
			printf("-1");
	}

	return 0;
}