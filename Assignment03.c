// Write a C program to generate multiplication table
#include<stdio.h>
int main(void){
    int num,i;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("\n");
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d",num,i,num*i);
        printf("\n");
    }
    return 0;
}
