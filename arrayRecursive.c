#include<stdio.h>
int createArray(int j,int k);
int main() {
	int i;
	printf("Enter the length of array.\n");
	scanf("%d",&i);
	createArray(i,0); //Pass the user's input and 0 (initial value for total) in the createArray function
	return 0;
}
int createArray(int j,int total) {
	int array[j],t,k;
	k = total; //assign total to k
	printf("Size: %d\n",j); //Print the size of current array being created
	k = (k + j);
	printf("Total so far: %d\n",k);//'k' not 'total' that'll print last time's total excluding current one
	t=j*j; //we're squaring it here cuz we're impatient to see the seg fault +1 would execute for longer
	createArray(t,k); //pass t and the current total so we can use AL&ML to calculate the next one
	return 0;
}
