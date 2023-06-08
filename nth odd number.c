#include <stdio.h>

int main() {
    int n, position, nth_odd_number;

    printf("Enter the position of the odd number: ");
    scanf("%d", &position);

    printf("Enter the number of odd numbers already considered: ");
    scanf("%d", &n);

    nth_odd_number = (n + position) + (position - 1);

    printf("The %dth odd number after the %dth odd number is: %d\n", position, n, nth_odd_number);

    return 0;
}
