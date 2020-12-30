/* This File created by Dmytro Hryshyn
 * Date: 29-Dec-2020
 * Time: 16:34
 * Topic: Array
 * Source: Brian W. Kernighan and Dennis M. Ritche 'The C programming language'
 * Exercise: 1-17
 * Task: Write a program to print all input lines that are longer than 80 characters.
 */
 
#include <stdio.h>

#define MAXLENGTH 1000
#define STR_LENGHT_TO_DISPLAY 80

/*! @brief Read and store line from input
    @param string[] - Store input.
    @param lim - Maximum length of string[] array.
    @param *total_chars - Total number characters from input.
    @returns - Length of string[]*/
int getLine(char string[], int lim);

int main(int argc, char const *argv[])
{

	int c;
	int line_length;
	char line[MAXLENGTH] = {};
	while ((line_length = getLine(line, MAXLENGTH)) > 0){
		if (line_length > STR_LENGHT_TO_DISPLAY)
			printf("%s\n", line);
	}
	return 0;
}

int getLine(char string[], int lim)
{
	int c;
	int i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		string[i] = c;
	if (c == '\n') {
		string[i] = c;
		++i;
	}
	string[i] = '\0';
	return i;
}
