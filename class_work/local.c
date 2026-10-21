#include <stdio.h>
int x;
int change(){
    x=20;
}
int main(void){
    x=10;
    printf("%d\n",x);
    x=change();
    printf("%d\n",x);
    return 0;
}