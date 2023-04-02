/*In this program we are going to learn how to convert given feet into inches? Let’s understand what are feet and inches first...

Word Feet is a plural of foot which is a measurement unit of length and inch is also a measurement of unit length. A foot contains 12 inches. So the logic to convert feet to inches is quite very simple, we have to just multiply 12 into the given feet (entered through the user) to get the measurement in inches.

In this example, we will read value of feet from the user and displays converted inches to the standard output device.

Input Format

Take an integer n for feet.
Constraints

n>=0
n<=99999999
Output Format

It should print the equivalent inches of the entered value in feets.
Sample Input 0

15
Sample Output 0

180
Sample Input 1

2
Sample Output 1

24
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int n,i;
    scanf("%d",&n);
    i=n*12;
    printf("%d",i);
    
    return 0;
}
