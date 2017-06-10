#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 10

void mirrormatrix()
{
	int matris[n][n];
	int copymatris[n][n];

	for (int y = 0; y < n; ++y)
	{
		for (int k = 0; k < n; ++k)
		{
			copymatris[y][k] = matris[n-y-1][n-k-1];
			printf("%d",copymatris[y][k]);
		}
		printf("\n");
	}
}
