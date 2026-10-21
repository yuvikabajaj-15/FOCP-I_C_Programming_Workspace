#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float avg;
    int a[5];
    n = 5;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i=0; i < n; i++){
        printf("%d ", a[i]);
        sum += a[i];
    }
    avg = (sum/5.0);
    printf("\nSum: %d",sum);
    printf("\nAverage: %0.2f",avg);
    return 0;
}