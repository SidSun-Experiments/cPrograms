//
// Created by sids on 23/10/18.
//
#include <stdio.h>
int main(){
    int i,k,n;
    n=7;
    for(i=4;i>=1;i--){
        for(k=1;k<=i;k++){
            printf("%d",n);
        }
        printf("\n");
        n=n-2;
    }
    return 0;
}