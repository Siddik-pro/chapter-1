// Author: Abs_;
/* Problem: 
Given the values of three variables a, b and c, write a program to compute and display the value
of x, where x = a /(b - c) , use the values (a) a = 250, b = 85, c= 25 (b) a = 300, b = 70, c = 70 Comment on the output in each case.*/
// **Note: a / 0 = NAN, so if b - c = 0 then the program doesn't give any output.
#include<stdio.h>
void main()
{
    int a, b, c;
    float x;
    printf("\nEnter the values of a , b , c : ");
    scanf("%d %d %d", &a, &b, &c);
    x = a /(b - c);
    printf("\nIf a = %d, b = %d, c = %d then x = %f", a, b, c, x);
       
    
}