#include <stdio.h>
// question no. 9
void printFactors(int number) {
    printf("Factors of %d are: ", number);

    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int num;

    // Get input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Return error code
    }

    // Call the function to print factors
    printFactors(num);

    return 0; // Return success code
}
