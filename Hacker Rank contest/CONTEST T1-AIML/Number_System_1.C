/*Print an entered value in Decimal, Octal and Hexadecimal format.

Input Format

Take a interger number n from the user.
Constraints

n<=100000000
n>=-100000000
Output Format

Print the value in Decimal.
Print the value in Octal.
Print the value in Hexadecimal(small letters).
Print the value in Hexadecimal(capital letters).
Sample Input 0

15
Sample Output 0

15
17
f
F
Sample Input 1

3
Sample Output 1

3
3
3
3
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    printf("%o\n",n);
    printf("%x\n",n);
    printf("%X\n",n);

    return 0;
}
