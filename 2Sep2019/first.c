#include<stdio.h>
#include<stdlib.h>
//primitive type
// 1.int
// 2.float
// 3.char
// 4.double


typedef struct Student{
    int rollno;
    char name[10];
    float percent; 
}stud;

// Student s2;

int main(){
    stud s1;
    int i=0;
    printf("Enter the rollno\n");
    scanf("%d",&s1.rollno);

    printf("Enter the name\n");
    for(i=0;i<10;i++){
        scanf("%c",&s1.name[i]);
    }
    // printf("Enter the rollno\n");
    // scanf("%d",&s2.rollno);

    // printf("Enter the rollno\n");
    // scanf("%d",&s3.rollno);
    
    printf("The value of rollno is %d",s1.rollno);
    // printf("The name is %s",s1.name);
    puts(s1.name);
    
    // printf("The value of rollno is %d\n",s2.rollno);
    // printf("The value of rollno is %d\n",s3.rollno);

    return 0;
}


