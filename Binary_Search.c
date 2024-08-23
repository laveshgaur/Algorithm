#include<stdio.h>
int binarySearch(int arr[],int value,int n){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(value<arr[mid]){
			high=mid-1;
		}
		else if(value>arr[mid]){
			low=mid+1;
		}
		else{
			printf("Index is %d\n",mid);
			return 0;
		}
	}
	printf("Not found\n");
	return 0;
}
int main(){
	int n,value;
	printf("Hey, I am Binary Search.\n");
	printf("Enter number of elements : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter value for search : ");
	scanf("%d",&value);
	binarySearch(arr,value,n);
	return 0;
}