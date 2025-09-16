/*Write a program to print the following pattern:

*

***

*****
*******
***

*
*/
#include <stdio.h>
int main(){
    
    for (int i = 1; i <= 8; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        if (i<=4){
            printf("\n");
            printf("\n"); 
        }
        if (i==5||i==7){
            printf("\n");
        }
    }
    for (int i=3;i>=1;i-=2){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        printf("\n");
    }
}