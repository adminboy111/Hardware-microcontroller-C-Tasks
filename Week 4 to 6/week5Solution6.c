#include <stdio.h>

// Function to count lines and characters in a file
void count_file_stats(FILE *fp) {
    char buffer[256];
    int char_count = 0, line_count = 0;

    // Read file line by line
    while (fgets(buffer, sizeof(buffer), fp)) {
        line_count++;  // Increment line count for each line

        // Count characters in the current line
        for (int i = 0; buffer[i] != '\0'; i++) {
            char_count++;  // Count every character (including spaces and newline)
        }
    }

    printf("Lines: %d\n", line_count);
    printf("Characters: %d\n", char_count);
}

int main() {
    // Open the file in read mode
    FILE *fp = fopen("file.txt", "r");

    if (fp == NULL) {
        perror("Error opening file"); // More informative error message
        return 1;
    }

    // Call function to count characters and lines
    count_file_stats(fp);

    // Close the file
    fclose(fp);

    return 0;
}