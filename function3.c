#include<stdio.h>
void input();
void output(int);

int main(){
    input();    

    return 0;
}

void input(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    output(num);
}

void output(int a){
    printf("The number is %d",a);
}
