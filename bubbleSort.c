#include<stdio.h>
int sort(int j);
int main(){
	int i;
	printf("Enter the number of elements.\n");
	scanf("%d",&i);
	sort(i);
	return 0;
}
int sort(int j){
	int array[j],i,k,temp;
	printf("Enter the elements.\n");
	for (i=0;i<j;i++){
		scanf("%d",&array[i]);
	}
	for (i=0;i<j;i++){
		for (k=0;k<j-i;k++){
			if(array[i]>array[i+1]) {
				array[i]=array[i] + array[i+1];
				array[i+1]=array[i]-array[i+1];
				array[i]=array[i] - array[i+1];
				/*temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;*/
			}
		}
	}
	printf("The sorted array is:");
	for (i=0;i<j;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
