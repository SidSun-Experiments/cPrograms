#include<stdio.h>
int createArray(int j,int k);
int main() {
int i;
printf("Enter the length of array.\n");
scanf("%d",&i);
createArray(i,0);
return 0;
}
int createArray(int j,int total) {
int array[j],t,k;
k = total;
printf("Size: %d\n",j);
if (k == 1) { total = 0; printf("0 done\n");}
k = (k + j);
printf("Total so far: %d\n",total);
t=j*j;
createArray(t,k);
return 0;
}
