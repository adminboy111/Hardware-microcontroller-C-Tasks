#include <stdio.h>

int main() {
    // Declare two integer variables
    int num1, num2;

    // Ask the user to input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Compare the numbers and print the result
    if (num1 > num2) {
        printf("The first number (%d) is greater than the second number (%d).\n", num1, num2);
    } 
    else if (num1 < num2) {
        printf("The first number (%d) is less than the second number (%d).\n", num1, num2);
    } 
    else {
        printf("The first number (%d) is equal to the second number (%d).\n", num1, num2);
    }

    return 0;
}