#include<stdio.h>
//return_type function_name(arguments);
//function declaration
int add(int, int);
int mul(int, int);


//main
int main(){//10mb
    int a =2,b=3;
    int result = add(a,b);
    int mresult = mul(a,b);
    //addition of 100 --> 2 mb
    //multiply of 100--> 2 mb
    printf("%d and %d \n",result,mresult);
    
    return 0;
}

//function definition
int add(int a, int b){
    return (a+b);
}

int mul(int a, int b){
    return (a*b);
}
