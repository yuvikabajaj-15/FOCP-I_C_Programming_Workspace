#include <stdio.h>
void printPattern(int n){
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

int main(){
    printPattern(5);
    return 0;
}