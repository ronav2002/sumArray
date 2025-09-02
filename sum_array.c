#include <stdio.h>

int main() {
    // Define an array of integers
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;   // number of elements in the array
    int sum = 0;    // variable to hold the total

    // Loop through the array and add each number to sum
    for (int i = 0; i < size; i++) {
        sum = sum + numbers[i];
    }

    // Print the result
    printf("The sum of the array is: %d\n", sum);

    return 0;
}

