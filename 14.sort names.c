#include <stdio.h>
#include <string.h>

void sort_names(char names[][50], int n, int asc) {
    int i, j;
    char temp[50];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if ((asc && strcmp(names[j], names[j + 1]) > 0) || (!asc && strcmp(names[j], names[j + 1]) < 0)) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    char names[][50] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int n = sizeof(names) / sizeof(names[0]);
    int i;

    printf("Before sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    sort_names(names, n, 1); // sort in ascending order
    printf("\nAfter sorting in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    sort_names(names, n, 0); // sort in descending order
    printf("\nAfter sorting in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
