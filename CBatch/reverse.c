#include<stdio.h>

int main(){
    int number = 45645;
    int reverse  = 0;

    while( number != 0 ){
        reverse = reverse*10 + number%10;
        number = number/10;
    }

    printf("The reverse is %d",reverse);
    return 0;
}