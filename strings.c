#include <stdio.h>
#include <string.h>

// Function to check if a string is palindrome
int isPalindrome(const char *str) {
    int length = strlen(str);
    
    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not a palindrome
        }
    }
    
    return 1;  // Palindrome
}

int main() {
    // Declare variables to store input
    char inputString[100];

    // Prompt user for input
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character at the end of the input
    inputString[strcspn(inputString, "\n")] = '\0';

    // Check if the entered string is a palindrome
    if (isPalindrome(inputString)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
