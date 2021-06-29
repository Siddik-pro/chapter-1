// Author: Abs_;
/* Problem :
   Given two integers 20 and 10, write a program that uses a function
   add() to add these two numbers and sub() to find the difference of these two numbers and then
   display the sum and difference in the following form:20 + 10 = 30
                                                        20 – 10 = 10 */
// simple problem, simple solution but I am making two solution.
#include<stdio.h>
/* int add( int n1, int n2)
{
    int res = n1 + n2;
    return res;
}
int subs( int n1, int n2)
{
    int res = n1 - n2;
    return res;
} */
void main()
{
    // The given numbers are 20 & 10. So, No need to input.
    int sum, sub;
    sum = 20 + 10;
    sub = 20 - 10;
    printf("\n20 + 10 = %d", sum);
    printf("\n20 - 10 = %d", sub);

    // or using functions:
   /*int n1, n2;
    scanf("%d %d", &n1, &n2);
    sum = add(n1, n2);
    sub = subs(n1, n2);
    printf("\n20 + 10 = %d", sum);
    printf("\n20 - 10 = %d", sub); */

}

                                                        
