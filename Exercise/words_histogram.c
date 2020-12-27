/* This File created by Dmytro Hryshyn
 * Date: 26-Dec-2020
 * Time: 19:16
 * Exersize 1-13 From C programming language (Brien W. Kernighan and Dennis.M Ritchie)
 * Task: Count total number of words from input.
 * Print histogram of the lenght of words from input
 */

#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_WORD_LENGTH 30

int main(int argc, char const *argv[])
{
	int c;
	int word = 0;
	int nletters [MAX_WORD_LENGTH]= {0};
	int state = OUT;
	int wlenght = 0;
	while ( (c = getchar())!= EOF){
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			++nletters[wlenght];
		}
		else if (state == OUT){
			state = IN;
			++word;
			wlenght = 0;	
		}
		wlenght++;
	}
	
	printf("Total words found (%d)\n", word);
	printf("********************\n");
	printf("Word length\t\tTotal\n");

	for ( int i = 1; i < MAX_WORD_LENGTH; ++i)
	{
		printf("%3d\t\t\t%d ", i, nletters[i]);
		for (int j = 0; j < nletters[i]; ++j)
		{
			printf("#");
		}
		puts("");
	}
	return 0;
}
