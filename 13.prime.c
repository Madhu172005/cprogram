#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);


    printf("The first %d prime numbers are: ", n);
    int count = 0, i = 2;
    while (count < n) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    printf("\n");


    printf("Prime numbers after the first %d primes are: ", n);
    count = 0;
    while (1) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
        if (count == n) {
            break;
        }
        i++;
    }
    printf("\n");
}
