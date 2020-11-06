// Section 8: 61. (Challenge) Generate Prime Numbers
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int p;
    int i;

    int primes[50] = {0};
    int primeIndex = 2;

    bool isPrime;

    // hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(p = 5; p <= 100; p = p + 2) {
        isPrime = true;
        for (i = 1; isPrime && p / primes[i] >= primes[i]; i++)
            if (p % primes[i] == 0)
                isPrime = false;
        if (isPrime == true) {
            primes[primeIndex] = p;
            primeIndex++;
        }
    }

    for (i = 0;  i < primeIndex - 1; i++)
        printf ("%i, ", primes[i]);
    printf ("%i\n", primes[i]);

    return 0;
}
