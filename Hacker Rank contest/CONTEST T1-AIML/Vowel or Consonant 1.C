/*This program will read a character from user and check whether it is VOWEL or CONSONANT if entered character was an alphabet using conditional opertors statement.

Input Format

Take a char ch fom the user.
Constraints

If other than alphabet is entered then print "Not an alphabet."
Output Format

If entered character is vowel then print "Vowel."
If entered character is consonant then print "Consonant."
If entered character is not alphabet then print "Not an alphabet.."
Sample Input 0

e
Sample Output 0

Vowel.
Sample Input 1

X
Sample Output 1

Consonant.
Sample Input 2

2
Sample Output 2

Not an alphabet.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch;
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        if((ch=='a' || ch=='A' || ch=='e' || ch=='E'   || ch=='i'|| ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')){
            printf("Vowel.");
        }
        else{
            printf("Consonant.");
        }
    }
    else{
        printf("Not an alphabet.");
    }
    return 0;
}
