#include <stdio.h>

float si(int,float,int);


int main(){
    int p ,t;
    float r,interest = 0;

    printf("Enter the principal, rate of interest and time \n");
    scanf("%d %f %d",&p,&r,&t);

    interest = si(p,r,t);

    printf("The simple interest is %f",interest);
}


float si(int p, float r, int t){

    float si = ((p*r*t)/100);

    return si;
}