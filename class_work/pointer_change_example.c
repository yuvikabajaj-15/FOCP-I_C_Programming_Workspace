#include <stdio.h>
void change (int *x){
    x = (*x)*2;
}
int main(){
    int x = 25;
    printf("%d\n",x);
    change(&x); // call by reference
    printf("%d\n",x);
    return 0;
}