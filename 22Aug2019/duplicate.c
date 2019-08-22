#include<stdio.h>

int main(){ 

    int a[6]={2,34,56,34,12,45};
    int i=0,j=0;
    int unique = 0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(i != j && a[i]==a[j]){
                unique = a[i];
                break;
            }
        }
    }
    printf("The duplicate element is %d\n",unique);
    return 0;
}