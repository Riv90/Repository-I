#include <stdio.h>

void random( int* ptr, int n, int m)
{
	for (int i = 0; i < n*m; i++)
	{
		tab[i]= rand() % 50;
	}
}

void print(int* ptr, int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%.3d",tab[j + i + n*m]);
		}
		printf("\n");
	}
}

int main()
{
	int n = 5;
	int* ptr = calloc(n*n, sizeof(int));
	random(ptr , n, n );
	print(ptr,n ,n);
	return 0;
}
