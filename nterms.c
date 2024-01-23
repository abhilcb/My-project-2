#include <stdio.h>
// question no.5

int main() {
    // Declare variables to store input and result
    int n;
    float sum = 0.0;

    // Prompt user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Compute the sum of the series
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    // Print the result
    printf("Sum of the series for the first %d terms: %.4f\n", n, sum);

    return 0;
}
