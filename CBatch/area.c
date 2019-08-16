#include <stdio.h>


int area(int , int);

int main(){
    int l,b,area1=0;
    printf("Enter the length and breadth");
    scanf("%d %d",&l,&b);

    area1 = area(l,b);
    printf("The area of the rectangle is %d",area1);

}

int area(int a, int b){
    
    return (a*b);
}