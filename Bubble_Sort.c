#include<stdio.h>
void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			else{
				continue;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int n,elements;
	printf("Hey, I am Bubble Sort.\n");
	printf("Enter number of elements : ");
	scanf("%d",&n);
	int arr[n];
	elements=0;
	printf("Enter elements of array : ");
	for(int i=0;;i++){
		scanf("%d",&arr[i]);
		elements++;
		char c;
		scanf("%c",&c);
		if(c=='\n'){
			break;
		}
		else{
			continue;
		}
	}
	if(n==elements){
		bubbleSort(arr,n);
	}
	else{
		printf("Your entered elements are not equal to %d \n",n);
	}
}