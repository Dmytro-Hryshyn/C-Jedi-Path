/* This File created by Dmytro Hryshyn
 * Date: 9-Sep-2021
 * Time: 23:05
 * Exersize 1-2 From C programming language (Brien W. Kernighan and Dennis.M Ritchie)
 * Task: Experiment to find out what happens when printf's argument sring contains \c, 
 * where c is some character no listet above.
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    // \t - for tab
    // \n - for new line
    printf("Hello\tWorld!\n");

    // \b - for backspace
    // Note second ! is not printed
    printf("I am learning C!!\b ");

    // \" - for double quote
    printf("To learn \"C\" is fun\n");

    // \\ - for backslash
    printf("To print backslash  use escape character \\\\\n");

    // In my case when i tried to use \c. Compiler shows an error, but program still works.
    // 'c' character just apended to "Some text"
    printf("Some text\c\n");
    return 0;
}
