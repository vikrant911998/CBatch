#include<stdio.h>


void add(){
    printf("No return type and no argument \n");
}

void add1(int a){
    printf("No return type and with argument \n");
}

int add2(){
    printf("with return type and no argument \n");
}

int add3(int a){
    printf("With return type and with argument \n");
}


int main(){
    add();
    add1(2);
    add2();
    add3(4);
    return 0;
}