#include<stdio.h>
//Function for selection sort
void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int index=i;
		int small=arr[index];
		for(int j=i+1;j<n;j++){
			if (arr[j]<small){
				small=arr[j];// small number will be updated
				index=j;//index is stored for swaping
			}
		}
        //Swaping of numbers
		int temp=arr[index];
		arr[index]=arr[i];
		arr[i]=temp;
	}
	for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
	}
}
int main(){
	int n,elements;
    printf("Enter number of elements : ");
	scanf("%d",&n);
	int arr[n];
	elements=0;
    //input in array
	for(int i=0;;i++){
		scanf("%d",&arr[i]);
		elements++;
		char c;
		scanf("%c",&c);
		if(c=='\n'){
			break;
		}
	}
	if (n==elements){
		selectionSort(arr,n);
	}
	else{
		printf("Your entered elements are not equal to %d \n",n);
	}
}