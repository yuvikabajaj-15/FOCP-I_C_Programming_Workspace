#include <stdio.h>

float toFahrenheit(float c){
    return c * 1.8 + 32;
}
int main(void){
    float c;
    printf("Enter temperature in c: ");
    scanf("%f",&c);
    printf("%f",toFahrenheit(c));
    return 0;
}