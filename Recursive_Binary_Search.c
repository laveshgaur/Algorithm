#include<stdio.h>
int RecursiveBinarySearch(int arr[],int low,int high,int value){
    if(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==value){
            return mid;
        }
        else if (arr[mid]>value){
            RecursiveBinarySearch(arr,low,mid-1,value);
        }
        else{
            RecursiveBinarySearch(arr,mid+1,high,value);
        }
    }
    else if(low==high){
        if(arr[low]==value){
            return low;
        }
        else{
            return -1;
        }
    }
    else{
        return -1;
    }
}
int main(){
    int elements=1;
    int arr[elements];
    printf("Enter elements of array : ");
    char c;
    do{
        scanf("%d",&arr[elements-1]);
        elements++;
        c=getchar();
    }while(c!='\n');
    int value;
    printf("Enter value for search : ");
    scanf("%d",&value);
    int answer=RecursiveBinarySearch(arr,0,elements-1,value);
    if (answer==-1){
        printf("Not found ");
    }
    else{
        printf("Index is %d ",answer);
    }
}