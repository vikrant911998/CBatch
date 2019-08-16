#include<stdio.h>

int main(){
    int i=0,j=0;

    for(i=0;i<5;i++){ //i=1<4 --> true
        // printf("*");
        //nested loop
        for(j=0;j<i;j++){//j=4<4 --> false
            printf("*");    //****
        }
        printf("\n");

    }


    return 0;
}