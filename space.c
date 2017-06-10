#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kelimesayar(char *kelime)
{
	int count;
	count = strlen(kelime);

	for (int i = 0; i < (80-count); ++i)
	{
		printf(" ");
	}
	printf("%s",kelime);
}