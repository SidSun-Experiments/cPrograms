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
	int array[j],i,k,low,up,mid;
	printf("Enter the elements.\n");
	for (i=0;i<j;i++){
		scanf("%d",&array[i]);
	}
	printf("enter the number to be searched.\n");
	scanf("%d",&k);
	low = 0;
	up = j-1;
	mid=(low+up)/2;
	while (low <= up){
		if(array[mid]>k) { up = mid-1; }
		else  if (array[mid]==k) { printf("Element found at %d\n",mid); break; }
		else { low=mid+1; mid = (low+up)/2; }
		if (low>up) { printf("Element not found.\n"); }
	}
	return 0;
}
