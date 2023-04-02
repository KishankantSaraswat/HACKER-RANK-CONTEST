/*Given a character and we have to find its ASCII value.

An ASCII value is a code (numeric value) of keys. We put the any character, symbol etc, than the computer can’t understand. A computer can understand only code and that code against each key is known as ASCII Code.

Input Format

Take a character from the user.
Constraints

Input should be only one character.
Output Format

Print the ASCII value of the given character.
Sample Input 0

a
Sample Output 0

97
Sample Input 1

A
Sample Output 1

65
Sample Input 2

1
Sample Output 2

49*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch;
    scanf("%c",&ch);
    printf("%d",ch);
    return 0;
}
