#include <stdio.h>

int main() {
    int n, i;
    int max,min;
    int a[5];
    n = 5;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
        if (a[i] > max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
    }
    printf("\nLargest element: %d",max);
    printf("\nSmallest element: %d",min);
    return 0;
}