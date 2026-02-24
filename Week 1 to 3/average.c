#include <stdio.h>
 
int main(void)
{
    int h1, h2, h3;
    double average;
 
    printf("Enter three heights (in cm):\n");
    scanf("%d %d %d", &h1, &h2, &h3);
 
    average = (h1 + h2 + h3) / 3.0;
 
    printf("Average height: %.2lf\n", average);
 
    return 0;
}