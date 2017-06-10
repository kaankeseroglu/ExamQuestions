#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int palindrom(char *word)
{
	int counter;
	int counter2 = 0;

	char *wordcopy;
	wordcopy = word;


	counter = strlen(word);

	for (int i = 0; i < counter; ++i)
	{
		if (word[i] == wordcopy[counter-i-1])
		{
			counter2++;
		}
	}

	if (counter2 == counter)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}