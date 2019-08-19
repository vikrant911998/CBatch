#include<stdio.h>
int add(int,int);


int main(){
    int result = add(2,3);
    printf("The sum is %d\n",result);
    return 0;
}

int add(int a, int b){
    int c = a+b;
    return c; 
}
