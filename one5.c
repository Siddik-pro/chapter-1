// Author: Abs_;
/* Given the radius of a circle. Calculate the area of the circle and display the area.
 * For getting the accurate result we are using float datatype. */
#include<stdio.h>
# define pi 3.1416
void main()
{
    float radius, area;
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("\nThe area of the circle is : %.2f", area);

}