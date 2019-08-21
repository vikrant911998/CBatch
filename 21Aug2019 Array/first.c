#include<stdio.h>

int main(){

    int vikrant[10];
    // int vikrant[]={5,8,91,34,57};
    // int vikrant[5]={5,8,91,34,57};


    printf("Enter the elements of the array\n");
    int i=0;
    
    for(i=0;i<5;i++){
        scanf("%d",&vikrant[i]);
    }

    for(i=0;i<10;i++){
        printf("The element is %d\n",vikrant[i]);
    }

    
    return 0;
}