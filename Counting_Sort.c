#include<stdio.h>
void Counting_Sort(int arr[],int n);
int getMax(int arr[],int n);//it will find maximum number in array 
int main(){
    printf("Hey, I am counting sort algorithm\n");
    printf("Enter number of elements : ");
    int n;
    scanf("%d",&n);
    int elements=0;
    int arr[n];
    printf("Enter elements of array : ");
    char c=' ';
    for(int i=0;c!='\n';i++){
        scanf("%d",&arr[i]);
        elements++;
        c=getchar();
    }
    if(n!=elements){
        printf("Elements are not equal to %d\n",n);
    }
    else{
        Counting_Sort(arr,n);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int getMax(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void Counting_Sort(int arr[],int n){
    int max=getMax(arr,n);
    int count[max];
    for(int i=0;i<max+1;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;// this will update count frequency
    }
    int index=0;//this is for continuous insertion of elements in sorted array
    for(int i=0;i<max+1;i++){
        if(count[i]!=0){
            for(int j=0;j<count[i];j++){
                arr[index++]=i;
            }
        }
    }
}