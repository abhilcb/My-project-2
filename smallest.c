#include <stdio.h>

int main() {
    // Declare variables to store input
    float num1, num2, num3;

    // Prompt user for input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Find the smallest number
    float smallest = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    // Find the greatest number
    float greatest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Print the results
    printf("Smallest number: %.2f\n", smallest);
    printf("Greatest number: %.2f\n", greatest);

    return 0;
}
