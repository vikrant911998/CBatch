#include<stdio.h>
#include<string.h>

int main(){

    char name[15]="vikrant";
    char name1[15];
    printf("the name is %s\n",name);
    
    printf("The reverse is %d",strrev(name));


    // printf("the length is %lu\n",strlen(name));
    // printf("The comaparison is %d\n",strcmp(name,"vikran"));
    // strcpy(name1,"mike");
    // printf("The string copy is %s\n",name1);
    return 0;
}


