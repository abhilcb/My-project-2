#include <stdio.h>
// question no. 12

// Function to swap the values at the addresses passed
void swapValues(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Get input from the user
    printf("Enter the value of variable 1: ");
    scanf("%d", &num1);

    printf("Enter the value of variable 2: ");
    scanf("%d", &num2);

    printf("Before swapping: Variable 1 = %d, Variable 2 = %d\n", num1, num2);

    // Call the function to swap values
    swapValues(&num1, &num2);

    printf("After swapping: Variable 1 = %d, Variable 2 = %d\n", num1, num2);

    return 0;
}
