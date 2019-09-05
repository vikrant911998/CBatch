#include<stdio.h>

int main(){
    // char c = '#';
    // printf("ASCII CODE of %c is %d\n",c,(int)c);
    int num[4]={5,6,9,6};
    int i=0;
    
    for(i=0;i<4;i++){
        if( num[i]==8 )
            num[i] = 0;
        else if(num[i]==9)
            num[i] = 1;
        else{
            num[i] = num[i]+2;
        }
    }

    int a=0;
    
    for(i=0;i<4;i++){
        a= a*10 +num[i];
    }

    printf("%d\n",a);
    return 0;
}