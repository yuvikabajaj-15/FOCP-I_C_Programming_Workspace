#include <stdio.h>

int change(int x){
    x=20;
    return x;
}
int main(void){
    int x=10;
    printf("%d\n",x);
    x=change(x);
    printf("%d\n",x);
    return 0;
}