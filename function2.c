#include<stdio.h>
// with return type and with argument

int add(int a, int b){
    return (a+b);
}

// with return type and no argument

int add(){
    return(2+7);
}

// no return type and no argument

void add(){
    printf("%d",2+5);
    return;
}

// no return type and with argument

void add(int a, int b){
    printf("%d",a+b);
}



int main(){



    return 0;
}