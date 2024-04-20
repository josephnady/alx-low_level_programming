#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is palindrome
bool is_palindrome(int n) {
    int reversed = 0;
    int original = n;

    // Reverse the number
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    // Check if the reversed number is equal to the original number
    return reversed == original;
}

int main() {
    int largest_palindrome = 0;

    // Iterate through all combinations of 3-digit numbers
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) { // Avoid duplicate pairs
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }
    printf("%d\n",largest_palindrome);
    return (0);
}

