//Author: Abs_;
/* problem: 1.15 Make a simple calculator */
#include <stdio.h>
void main()
{
    int x, y;
    float sum, diff, pro, div;
    printf("Enter the values of x , y :");
    scanf("%d %d", &x, &y);
    sum = x + y;
    diff = x - y;
    pro = x * y;
    div = x / y;
    printf("x          = %d       y = %d\nSum        = %.2f   Difference = %.2f\n", x, y, sum, diff);
    printf("Product    = %.2f   Division   = %.2f", pro, div);
}
