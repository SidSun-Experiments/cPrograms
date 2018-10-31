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
	int array[j],i,k,min,temp;
	printf("Enter the elements.\n");
	for (i=0;i<j;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<j-1-;i++){
		min = i;
		for(k=i+1;k<j;k++){
			if (array[k]<array[min]){
				min = k;
			}
			}
		if(min != i){
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
		}
	}
	printf("The sorted array is:");
	for (i=0;i<j;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
