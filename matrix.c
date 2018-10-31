//
// Created by sids on 23/10/18.
//
#include <stdio.h>
int create(int j, int k);
int main(){
    int i,j;
    printf("Enter the rows in the 2D array.\n");
    scanf("%d",&i);
    printf("Enter the columns in the 2D array.\n");
    scanf("%d",&j);
    create(i,j);
    return 0;
}
int create(int j, int k){
    int array[j][k],m,i;
    printf("enter the numbers for the array.\n");
    for(i=0;i<j;i++){
        for(m=0;m<k;m++){
            scanf("%d",&array[i][m]);
        }
    }
    printf("The output is: \n");
    for(i=0;i<j;i++){
        for(m=0;m<k;m++){
            printf("%d ",array[i][m]);
        }
        printf("\n");
    }
    return 0;
}
