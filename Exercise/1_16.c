/* This File created by Dmytro Hryshyn
 * Date: 29-Dec-2020
 * Time: 12:23
 * Topic: Arrays
 * Source: Brian W. Kernighan and Dennis M. Ritche 'The C programming language'
 * Exercise: 1-16
 * Task: Revise the main routine of the longest-line programm
 * so it will correctly print the length of arbitrarily long input lines, and as much as posible of the text
 */

#include <stdio.h>

#define MAXLINE 100

/*! @brief Read and store line from input
    @param string[] - Store input.
    @param lim - Maximum length of string[] array.
    @param *total_chars - Total number characters from input.
    @returns - Length of string[]*/
int getLine(char string[], int lim, unsigned long *total_chars);

/*! @brief Copy string from source to destination
    @param to[] - Destination
    @param from[] - Source
    @returns void */
void copy(char to[], char from[]);

int main(int argc, char const *argv[])
{
	unsigned long chars = 0;
	unsigned long *total_chars = &chars;
	int line_length = 0;
	int longest_line = 0;
	char line[MAXLINE];
	char longest[MAXLINE];
	while ((line_length = getLine(line, MAXLINE, total_chars)) > 0) {
		if (line_length > longest_line) {
			longest_line = line_length;
			copy(longest, line);
		}
	}
	printf("Input contains %lu chars\n", *total_chars);
	printf("Longest line %d\n", longest_line);
	if (longest_line > 0)
		printf("%s", longest);
	return 0;
}

int getLine(char string[], int lim, unsigned long *totalchars)
{
	int c;
	int i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {

		string[i] = c;
		++(*totalchars);
	}
	if (c == '\n') {
		string[i] = c;
		++(*totalchars);
		++i;
	}
	string[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}