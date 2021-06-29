//Author : Abs_;
/*  Distance between two points (x1,y1) and (x2,y2) is governed by the formula D = sqrt((x2-x1)^2+(y2-y1)^2)
 *  Write a program to compute D given the coordinates of the points.*/
// simple problem just include math library.
#include <stdio.h>
#include <math.h>
void main()
{
    int x1, y1, x2, y2, x, y;
    float D;
    printf("Enter the values of x1, y1, x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    x = (x2 - x1);
    y = (y2 - y1);
    D = sqrt((x * x) + (y * y));
    printf("\nThe value of D = %f", D);
}