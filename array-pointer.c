#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array are:\n");
    int *p = arr;
    for(i=0; i<n; i++) {
        printf("%d\n", *(p+i));
    }

    return 0;
}
