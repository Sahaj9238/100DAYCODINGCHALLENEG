/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1:
7Output 1:
Area=153.94, Circumference=43.96
Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>
int main(){
    float radius;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    float pi=3.14;
    printf("Area= %.2f \n",pi*radius*radius);
    printf("Circumference= %.2f",2*pi*radius);
}