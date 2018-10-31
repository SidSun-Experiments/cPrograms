//
// Created by sids on 23/10/18.
//
#include <stdio.h>
int main(){
    int num,i,digit,sum=0;
    printf("Enter the number.\n");
    scanf("%4d",&num);
    for(i=0;num>0;i++){
        digit=num%10;
        num=num/10;
        sum=sum+digit;
    }
    printf("The sum is: %d\n",sum);
    return 0;
}