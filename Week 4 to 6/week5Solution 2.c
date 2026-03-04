#include <stdio.h>

int main() {
    // Declare variables
    int i, n = 10;
    long long int fib1 = 0, fib2 = 1, next_fib;

    // Print the first two Fibonacci numbers
    printf("Fibonacci sequence (first 10 numbers):\n");
    printf("%lld\n", fib1);
    printf("%lld\n", fib2);

    // Use a for loop to print the next 8 Fibonacci numbers
    for (i = 3; i <= n; i++) {
        next_fib = fib1 + fib2;  // Fibonacci formula
        printf("%lld\n", next_fib);

        // Update fib1 and fib2 for the next iteration
        fib1 = fib2;
        fib2 = next_fib;
    }

    return 0;
}