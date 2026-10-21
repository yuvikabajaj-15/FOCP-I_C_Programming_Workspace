#include <stdio.h>

int main() {
    int n, i;
    int count = 0;
    int a[5];
    n = 5;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
        if (a[i] % 2 == 0) {
            count++;
        }
        }
    printf("\nNumber of even elements: %d", count);
    return 0;
}