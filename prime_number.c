#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function prototype
bool isPrime(int n);

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

// Function to check if n is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    int limit = (int)sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
