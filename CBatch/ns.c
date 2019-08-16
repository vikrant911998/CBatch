#include<stdio.h>

float ns(int,int);
float hra(int);
float da(int);
float ta(int);


int main(){
    int pf = 1400;
    float NetSalary;
    int basicSalary = 0 ;
    printf("Enter the basic Salary");
    scanf("%d",&basicSalary);

    NetSalary = ns(basicSalary,pf);

    printf("The NET salary is %f",NetSalary);
}

float ns(int bs,int pf){
    float a1 = hra(bs);
    float a2 = da(bs);
    float a3 = ta(bs);

    float salary = (bs+a1+a2+a3)-pf;
    return salary;
}

float hra(int bs){
    return (bs*0.3);
}

float da(int bs){
    return (bs*0.2);
}

float ta(int bs){
    return (bs*0.1);
}
