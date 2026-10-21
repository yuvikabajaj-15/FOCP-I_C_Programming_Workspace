#include <stdio.h>
int main(){
    int x = 25;
    printf("%d\n",x);
    printf("%p\n", &x);
    int *ptr = &x; // pointer
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
}