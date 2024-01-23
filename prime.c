#include <stdio.h>
// question no. 8

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

// Function to generate prime numbers less than 100
void generatePrimesLessThan100() {
    printf("Prime numbers less than 100:\n");
    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;
    
    // Example: Check if a given number is prime
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    // Generate prime numbers less than 100
    generatePrimesLessThan100();

    return 0;
}
