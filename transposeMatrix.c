//
// Created by sids on 29/10/18.
//
#include <stdio.h>
int matrix(int i, int j);
int main(){
    int i,j;
    printf("Enter the rows in the 2D array.\n");
    scanf("%d",&i);
    printf("Enter the columns in the 2D array.\n");
    scanf("%d",&j);
    matrix(i,j);
    return 0;
}
int matrix(int i,int j){
    int array[i][j],k,l,temp,transpose[i][j];
    printf("Please enter the elements.\n");
    for(k=0;k<i;k++){
        for(l=0;l<j;l++){
            scanf("%d",&array[k][l]);
        }
    }
    printf("The matrix is: \n");
    for(k=0;k<i;k++){
        for(l=0;l<j;l++){
            printf("%d ",array[k][l]);
        }
        printf("\n");
        }
    for(k=0;k<i;k++){
        for(l=0;l<j;l++){
            transpose[l][k]=array[k][l];
        }
    }
    printf("The transposed matrix is: \n");
    for(k=0;k<i;k++){
        for(l=0;l<j;l++){
            printf("%d ",transpose[k][l]);
        }
        printf("\n");
    }
    return 0;
}