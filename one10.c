//Author : Abs_;
/* Area of a triangle is given by the formula A = sqrt(S(S-a) (S-b) (S-c)) */

#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, s, area;
    printf("Enter the value of a, b, c : ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    printf("\nThe area of the triangle is : %f", area);
}