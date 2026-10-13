#include <stdio.h>
// function definition
int add(int x, int y){
    return x+y;
}


int main(void){
    int x,y;
    x=10;
    y=20;
    int result = add(x,y); // function call to store output of add function
    printf("%d\n",result); // print result
    printf("%d\n",add(12,5)); // function call
    return 0;
}