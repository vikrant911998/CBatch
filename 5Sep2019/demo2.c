#include<stdio.h>
#include<stdlib.h>

int main(){

    int a = 2;// sma -> Static Memory Allocation

    int *p = &a;
    
    //*p ->*&a ->2
    

    int *f = (int *)malloc(2); //DMA
    // *f = 5;
    printf("%d\n",f);

    float *d = (float *)realloc(f,4);
    // *d = 5;
    printf("%d\n",d);
    // int *c = (int *)calloc(5,2);
    
    // *c = 11;
    // *(c+1) = 12;
    // *(c+2) = 65;
    // *(c+3) = 91;
    // *(c+4) = 87;
    // int i=0;
    // for(i=0;i<5;i++){

    //     printf("%d\n",*(c+i));

    // }

    return 0;
}