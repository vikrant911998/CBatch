#include<stdio.h>

int main(){
    int a = 56789;
    int i=5,sum=0;

    while(a!=0){
        int temp = a%10;
        if(i == 4 || i == 1){
            sum  = sum+temp;
        }
        i--;
        a = a/10;
    }

    printf("The sum is %d\n",sum);

    return 0;
}