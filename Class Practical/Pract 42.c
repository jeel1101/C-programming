#include <stdio.h>

int main() {
    int a[5], temp;

    printf("Enter elements: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nAscending order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
