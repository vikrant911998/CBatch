#include<stdio.h>
//a=465
int main(){
    int a = 0;
    printf("Enter a number");
    scanf("%d",&a);
    int result = 0;
    while( a != 0 ){
        result  = result + a%10;//15
        a = a/10;//46
    }
    printf("The sum of digit of number is %d\n",result);

    return 0 ;

}