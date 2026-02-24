#include <stdio.h>
 
int main(void)
{
    double radius;
    double circumference;
 
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
 
    circumference = 2 * 3.14159 * radius;
 
    printf("The circumference is: %.2f\n", circumference);
 
    return 0;
}