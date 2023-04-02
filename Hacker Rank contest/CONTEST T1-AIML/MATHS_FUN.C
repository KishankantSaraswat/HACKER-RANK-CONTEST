/*Use of pow, sqrt functions on floating point values. take three variables from user example a,b,c . a and b use in power and c use in sqrt function

Both functions are library functions and declare in math.h header file.

E.g.

pow(2.0,3.0) then it will return 8.000000

sqrt(8.0) then it will return 2.828427

Input Format

Take a floating point value n.

Constraints

n>=0.00 2. n<=99999999.000000

Output Format

First line should print the power value value.
Second line should print the sqrt value.
Sample Input 0

2 3
8
Sample Output 0

8.000000
2.828427
Sample Input 1

6.0 8.0
2976
Sample Output 1

1679616.000000
54.552727
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    double p=pow(a,b);
    double s=sqrt(c);
    printf("%lf\n%lf",p,s);
    return 0;
}
