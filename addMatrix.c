//
// Created by sids on 30/10/18.
//
#include <stdio.h>
int matrix(int i, int j);
int main(){
    int i,j,k;
    printf("Enter the rows in the first 2D array.\n");
    scanf("%d",&i);
    printf("Enter the columns in the first and rows in the second 2D array.\n");
    scanf("%d",&j);
    matrix(i,j);
    return 0;
}
int matrix(int i,int j){
    int first[i][j],second[i][j],added[i][j],m,n;
    printf("Please enter the elements in the first matrix.\n");
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            scanf("%d",&first[m][n]);
            second[m][n]=first[m][n];
        }
    }
    printf("Please enter the elements in the second matrix.\n");
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            scanf("%d",&second[m][n]);
        }
    }
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            added[m][n]=first[m][n]+second[m][n];
        }
    }
    printf("The resultant added matrix is: \n");
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            printf("%d ",added[m][n]);
        }
        printf("\n");
    }
    return 0;
}