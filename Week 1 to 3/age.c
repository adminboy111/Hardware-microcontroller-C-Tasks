#include <stdio.h>
 
int main(void)
{
    int current_age;
    int future_years;
    int future_age;
 
    printf("Enter your current age: ");
    scanf("%d", &current_age);
 
    printf("Enter number of years in the future: ");
    scanf("%d", &future_years);
 
    future_age = current_age + future_years;
 
    printf("In %d years, you will be %d years old.\n",
           future_years, future_age);
 
    return 0;
}