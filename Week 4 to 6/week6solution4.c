#include <stdio.h>
 
// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main() {
    int num1, num2;
 
    // Ask the user to input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
 
    printf("Enter the second integer: ");
    scanf("%d", &num2);
 
    // Print the values before swapping
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
 
    // Call the swap function
    swap(&num1, &num2);
 
    // Print the values after swapping
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
 
    return 0;
}
 