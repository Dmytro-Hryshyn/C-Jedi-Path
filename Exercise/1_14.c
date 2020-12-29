/* This File created by Dmytro Hryshyn
 * Date: 27-Dec-2020
 * Time: 15:13
 * Topic: Char count from input
 * Source: Brian W. Kernighan and Dennis M. Ritche 'The C programming language'
 * Exercise: 1-14 Write a program to pring a histogram  of the frequencies of different charactes in it's input
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	long total_chars = 0;
	long current_key = 0;
	int char_quantity [127]= {};
	while((current_key = getchar()) != EOF){
		++total_chars;
		++char_quantity[current_key];
	}
	printf("Iput contains: %ld symbols\n", total_chars);
	printf("Char\t Total:\n");
	
	// i counter = 32 to  ignore first 0-31 ASCII symbols
	for ( char i = 32; i < 127; ++i)
	{
		printf("%c\t[%3d] ", i, char_quantity[i]);
		for (int j = 0; j < char_quantity[i]; ++j)
		{
			printf("#");
		}
		puts("");
	}
	return 0;
}
