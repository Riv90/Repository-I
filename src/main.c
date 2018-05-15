#include <stdio.h>
#include <stdlib.h>

void fillRandom( int* ptr, int n, int m)
{
	for (int i = 0; i < n*m; i++)
	{
		ptr[i]= rand() % 50;
	}
}

void print(int* ptr, int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%.3d ",ptr[j + i * n]);
		}
		printf("\n");
	}
}

int main()
{
	int n = 5;
	int* ptr = calloc(n*n, sizeof(int));
	fillRandom(ptr , n, n );
	print(ptr,n ,n);
	return 0;
}
