/*To check whether the input number is Armstrong number or not. An Armstrong number is an
integer with three digits such that the sum of the cubes of its digits is equal to the number itself.*/
#include<stdio.h>
int main(void){
    int num,sum,result=0,remainder,original_num;
    printf("Enter any number");
    scanf("%d",&num);
    original_num=num;
    while(original_num>0){
        remainder=original_num%10;
        result+=remainder*remainder*remainder;
        original_num=original_num/10;
    }
    if(result==num){
        printf("%d is an armstrong number.\n",num);
    }
    else{
        printf("%d is not an armstrong number.\n",num);
    }
}