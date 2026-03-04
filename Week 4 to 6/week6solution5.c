#include <stdio.h>

// Recursive function to calculate sum from 1 to n
int sum(int n) {
    // Base case
    if (n == 1)
        return 1;

    // Recursive case
    return n + sum(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of all integers from 1 to %d is: %d\n", num, sum(num));

    return 0;
}