#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("Prime numbers between 1 and 12 are:");

    for (num = 2; num <= 12; num++) {
        isPrime = 1; // Assume the number is prime

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime) {
            printf("%d", num);
        }
    }

    return 0;
}
