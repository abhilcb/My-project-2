#include <stdio.h>

int main() {
    // Declare variables to store input
    float num1, num2;

    // Prompt user for input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate and print the sum
    float sum = num1 + num2;
    printf("Sum: %.2f\n", sum);

    // Calculate and print the product
    float product = num1 * num2;
    printf("Product: %.2f\n", product);

    // Calculate and print the difference
    float difference = num1 - num2;
    printf("Difference: %.2f\n", difference);

    return 0;
}
