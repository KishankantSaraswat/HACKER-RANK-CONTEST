/*Use of floor and ceil functions on floating point values.

Both functions are library functions and declare in math.h header file. Floor ignores the fraction part and just print the same in floating point.

E.g.

floor(123.46) then it will return 123.000000

ceil(123.46) then it will return 124.000000

Input Format

Take a floating point value n.
Constraints

n>=0.00
n<=99999999.000000
Output Format

First line should print the floor value.
Second line should print the ceil value.
Sample Input 0

123.45
Sample Output 0

123.000000
124.000000
Sample Input 1

69.98
Sample Output 1

69.000000
70.000000
Sample Input 2

1.12
Sample Output 2

1.000000
2.000000
Sample Input 3

632.99
Sample Output 3

632.000000
633.000000
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float n,f,c;
    scanf("%f",&n);
    f=floor(n);
    c=ceil(n);
    printf("%f\n",f);
    printf("%f\n",c);
    
    return 0;
}
