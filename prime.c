#include <stdio.h>

int main() {
    int num, i;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        int is_prime = 1;  // Assume the number is prime
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0;  // num is divisible by i, so it's not prime
                break;
            }
        }
        if (is_prime)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}
