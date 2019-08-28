#include<stdio.h>

int main(){
    int a=9;

    // scanf("%d",&a);
    int *p = &a;
    int **f = &p;
    int ***d = &f;
    float fi = 3.4;
    float *t = &fi;
    // int f = *&a;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",f);
    printf("%d\n",d);
    printf("%d\n",t);
    
    return 0;
}