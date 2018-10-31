//
// Created by sids on 29/10/18.
//
#include <stdio.h>
int matrix(int i, int j,int k);
int main(){
    int i,j,k;
    printf("Enter the rows in the first 2D array.\n");
    scanf("%d",&i);
    printf("Enter the columns in the first and rows in the second 2D array.\n");
    scanf("%d",&j);
    printf("Enter the columns in the second 2D array.\n");
    scanf("%d",&k);
    matrix(i,j,k);
    return 0;
}
int matrix(int i,int j,int k){
    int first[i][j],second[j][k],multiplied[i][k],m,n,sum,val,o;
    printf("Please enter the elements in the first matrix.\n");
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            scanf("%d",&first[m][n]);
        }
    }
    printf("Please enter the elements in the second matrix.\n");
    for(m=0;m<j;m++){
        for(n=0;n<k;n++){
            scanf("%d",&second[m][n]);
        }
    }
    for(m=0;m<i;m++){
        for(n=0;n<k;n++){
            sum=0;
            for(o=0;o<j;o++){
                val=first[m][n]*second[o][n];
                sum=val+sum;
            }
            multiplied[m][n]=sum;
        }
    }
    printf("The resultant matrix is: \n");
    for(m=0;m<i;m++){
        for(n=0;n<k;n++){
            printf("%d ",multiplied[m][n]);
        }
        printf("\n");
    }
    return 0;
}