#include <stdio.h>

int main() {
    // Declare and initialize a 2D array with 3 rows and 3 columns
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;
    int rows = 3, cols = 3;  // Number of rows and columns in the 2D array

    // Iterate over the 2D array to calculate the sum of its elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];  // Add each element to the sum
        }
    }

    // Print the sum
    printf("The sum of all elements in the 2D array is: %d\n", sum);

    return 0;
}