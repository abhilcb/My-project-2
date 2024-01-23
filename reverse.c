#include <stdio.h>
// question no.4

int main() {
    // Declare variables to store input and result
    int num, reversed = 0, remainder;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the digits
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
