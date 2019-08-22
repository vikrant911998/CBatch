#include<stdio.h>

int main(){

    int a[5]={2,34,56,12,45};
    int i=0;
    int max =a[0],min=a[0];

    for(i=0;i<5;i++){
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    printf("The max element is %d\n",max);
    printf("The min element is %d\n",min);
    return 0;
}