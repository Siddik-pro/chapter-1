//Author: Abs_;
/* This is simple problem, we know Diameter = 2 * radius. we will use this formula */
#include<stdio.h>
#include<math.h>
#define pi 3.1416
void main()
{
    int x1, y1, x2, y2, x, y;
    float radius, area;
    printf("Enter the values of x1, y1, x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    x = (x2 - x1);
    y = (y2 - y1);
    radius = (sqrt((x * x) + (y * y)))/2;
    area =  pi * radius * radius;
    printf("\nThe area of the circle is = %f", area);
}