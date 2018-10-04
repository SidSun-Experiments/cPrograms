#include<stdio.h>
int createArray(int j); //Explicitly declare that the function exists to avoid a warning
int main(){
	int i;
	printf("Enter the length of the array to be created.\n");
	scanf("%d",&i);
	createArray(i);// Call the createArray function with the length of input
	return 0;
}
int createArray(int j){
	int array[j], i; // Use whatever datatype necessary altho' that should be obvious.. I guess I'm bad at commenting code so.. kthxbye
	printf("Enter the numbers to be stored.\n");// I got confused what to do, too better tell, eh?
	for (i=0;i<j;i++){
		scanf("%d",&array[i]); // Take input
	}
	return 0;
}
