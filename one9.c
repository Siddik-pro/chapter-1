// Author: Abs_;
/* Write a program to convert the temperature (a) from Celsius to Fahrenheit and (b) from Fahrenheit to Celsius.*/
/* hint: F = ((9*C)/5)+32 & C=((F-32)*5)/9 */
#include<stdio.h>
void main()
{
    // celsius to farhrenheit 
    float c, f;
    printf("\nEnter the celsius value : ");
    scanf("%f", &c);
    f = ((9*c)/5)+32;
    printf("\nThe fahrengeit value is : %f", f);
   
    // farhrenheit to calsius
   /*  printf("\nEnter the fahrengeit value : %f", f);
    f = ((9*c)/5)+32;
    printf("\nThe celsius value is : %d", c); */
    
}

