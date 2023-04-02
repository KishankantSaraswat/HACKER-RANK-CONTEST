/*The Program to read two integer numbers and display the product of both numbers taken as a input.

Input Format

Take two integers n1 and n2 (separate line)
Constraints

0>=(n1,n2)<=100000000
Output Format

It should print the Product of two numbers only.
Sample Input 0

10
20
Sample Output 0

200
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("%d",c);
    return 0;
}