#include <stdio.h>

void swap(int* x, int* y){
    int temp = *x;
    *x=*y;
    *y = temp;
}

int main(){
    int x = 25, y=50;
    printf("x = %d y = %d\n",x,y);
    swap(&x,&y);
    printf("x = %d y = %d\n",x,y);
    return 0;
}