/*Given an integer number and two divisors d1 and d2, we have to check whether number is divisible by d1 and d2 or not.

Input Format

Take an integer n whose divisibilty is to be checked.
Take the first divisor value d1.
Take the second divisor value d2.
Constraints

n>=1
n<=100000000
Output Format

Print "Yes." if number is divisible by both the entered divisors.
Print "No." if number is not divisible by both or any of the entered divisors.
Sample Input 0

100
10
20
Sample Output 0

Yes.
Sample Input 1

90
10
20
Sample Output 1

N0.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if(n%a==0 && n%b==0){
        printf("Yes.\n");
    }
    else{
        printf("No.\n");
    }
    return 0;
}
