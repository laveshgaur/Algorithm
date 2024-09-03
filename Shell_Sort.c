#include<stdio.h>
void shellSort(int arr[],int n);
int main(){
    int n;
    printf("Enter number of elements : " );
    scanf("%d",&n);
    int elements=0;
    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0;;i++){
        scanf("%d",&arr[elements]);
        elements++;
        char c=getchar();
        if (c=='\n'){
            break;
        }
    }
    if(n==elements){
        shellSort(arr,n);
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("Number of elements are not equal to %d\n",n);
    }
}
void shellSort(int arr[],int n){
    for(int gap=n/2;gap>0;gap/=2){
        for(int i=gap;i<n;i++){
                int temp=arr[i];
                int j;
                for(j=i;j>=gap && arr[j-gap]>temp;j-=gap){
                    arr[j]=arr[j-gap];
                }
                arr[j]=temp;
        }
    }
}
