#include<stdio.h>
void insertionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int element=arr[i+1];
		int j=i;
		while(j>=0 && element<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=element;
	}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
	printf("\n");
}
int main(){
	printf("Hey, I am Insertion Sort.\n");
	int n,elements;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of array : ");
	char c;
	elements=0;
	for(int i=0;c!='\n';i++){
		scanf("%d",&arr[i]);
		elements++;
		c=getchar();
	}
	if(n==elements){
		insertionSort(arr,n);
	}
	else{
		printf("Your entered elements are not equal to %d \n",n);
	}
}