// *****   i=0,j=0->5   for(i=0;i<5)
// ****    i=1,j=4-->5-i
// ***     i=2,j=3-->5-i
// **
// *

#include<stdio.h>

int main(){
    int i=0,j=0;

    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}