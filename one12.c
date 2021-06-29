//Author : Abs_;
/* Problem : find the area and circumference of a circle with (o,o), (x,y)*/
// simple solution:
#include <stdio.h>
#include <math.h>
#define pi 3.1416
void main()
{
    int x1, y1, ox, oy, x, y;
    float radius, area, circum;
    printf("Enter the values of ox, oy, x1, y1: ");
    scanf("%d %d %d %d", &ox, &oy, &x1, &y1);
    x = (x1 - ox);
    y = (y1 - oy);
    radius = sqrt((x * x) + (y * y));
    area = pi * radius * radius;
    circum = 2 * pi * radius;

    printf("\nThe Area is = %f\n The circumference is = %f", area, circum);
}