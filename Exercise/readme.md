### Exercise list

#### Chapter 1: **A Tutorial Introduction**

- [x] 1-13. Write a program to print a histogram of the length of words in it's input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

- [x] 1-14. Write  a program to print a histogram of the frequencies of different characters in it's input.

- [ ] 1-16. Revise the main routine of the longest-line program so it will correctly print  the length of arbitrarily long input lines, and as much as possible of the text.

- [x] 1-17. Write a program to print all input lines that are longer then 80 characters.

- [ ] 1-18. Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.

- [ ] 1-19. Write a function `reverse(s)` that reverses the character string s. Use it to write a program that reverses it's input a line at the time.

- [ ] 1-20. Write a program `detab` that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every `n` columns. Should `n` be a variable or a symbolic parameter?

- [ ] 1-21. Write a program `entab` that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for `detab`. When either a tab or single blank would suffice to reach a tab stop, which should be given preference?

- [ ] 1-22. Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks of tabs before the specified column.

- [ ] 1-23. Write a program to remove all comments fro a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest.

- [ ] 1-24. Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses, brackets and braces. Don't forget about quotes, both single and double, escape sequences, and comments. (This program is hard if you do it in full generality.)

#### Chapter 2: **Types, Operators, and Expressions**

- [ ] 2-1. Write a program to determine the ranges of `char`, `short`, `int`, and `long` variables, both `signed` and `unsigned`, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.

- [ ] 2-2. Write a loop equivalent to the for loop above without using && or ||.

- [ ] 2-3. Write the function `htoi(s)`, which converts a string of hexadecimal digits (including an optional 0x or 0X) into it's equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.

- [ ] 2-4. Write an alternate version of `squeeze(s1, s2)` that deleted each character in `s1` that matches any character in the string `s2`.

- [ ] 2-5. Write the function `any(s1, s2)`, which returns the first location in the string `s1` where any character from the sting `s2` occurs, or -1 if `s1` contains no characters from `s2`. (The standard library function `strbrk` does the same job but returns a pointer to the location.)

- [ ] 2-6. Write a function `setbits(x, p, n, y)` that returns `x` with the `n` bits that begin at position `p` set to the rightmost `n` bits of `y`, leaving the other bits unchanged.

- [ ] 2-7. Write a function `invert(x, p, n)` that returns `x` with the `n` bits that begin at position `p` inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.

- [ ] 2-8. Write a function `rightot(x, n)` that returns the value of the integer `x` rotated to the right by `n` bits position.

- [ ] 2-9. In a two's complement numbers system, `x &= (x - 1)` deletes the rightmost 1-bit in x. Explain why. Use this observation to write a faster version of `bitcount()`.

- [ ] 2-10. Rewrite the function `lower()` which converts upper case letters to lover case, with a conditional expression instead of `if-else`.

#### Chapter 3: **Control Flow**

- [ ] 3-1. Our binary search makes two tests inside the loop, when one would suffice (at he price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time.

- [ ] 3-2. Write a function `escape(s, t)` that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string `s` to `s`. Use a `switch`. Write a function for the other direction as well, converting escape sequences into the real characters.

- [ ] 3-3. Write a function `expand (s1, s2)` that expand shorthand notation like a-z in the string `s1` into the equivalent complete list abc...xyz in `s2`. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing -is taken literally.

- [ ] 3-4. In a two's complement numbers representation, our version of `itoa` does not handle the largest negative number, that is, the value of `n` equal to -(2^wordsize-1). Explain why not. Modify it to print that value correctly, regardless of the machine on which it runs.

- [ ] 3-5. Write the function `itob(n, s, b)` that converts the integer `n` into a base `b` character representation in the string `s`. In particular, `itob(n, s, 16)` formats `n` as hexadecimal integer in `s`.

- [ ] 3-6. Write a version of `itoa()` that accepts three arguments instead of two. The third argument is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough.
