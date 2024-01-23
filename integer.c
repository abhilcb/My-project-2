#include <stdio.h>
// question no. 3

int main() {
    // Declare variables to store input and results
    int num, digit, sum = 0, product = 1;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum and product of digits
    int originalNum = num; // Store the original number to print later
    while (num != 0) {
        digit = num % 10;    // Get the last digit
        sum += digit;         // Add the digit to the sum
        product *= digit;     // Multiply the digit to the product
        num /= 10;            // Remove the last digit
    }

    // Print the results
    printf("Original Number: %d\n", originalNum);
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}
