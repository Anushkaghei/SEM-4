// merge sort hard coded
#include<stdio.h>

void merge(int arr[],int l,int m,int r){
  int i,j,k;
  int n1 = m-l+1;
  int n2=r-m;
  
  //create temp arrays
  int L[n1], R[n2];
  
  //copy data to temp arrays
  for(i=0;i<n1;i++)
    L[i]=arr[l+i]
  for(j=0; i<n2;j++)
    R[j]=arr[m+
    
    
  //initial index of merged subarray
}

void merge_sort(int arr[],int l,int r){
    int m=l+(h-1)/2;
    if(l<h){
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int arr[]={12,11,13,5,6,7};
    int array_size = sizeof(arr)/sizeof(arr[0]);
    printf("Before sorting\n");
    for(int i=0;i<array_size;i++){
        printf("%d",arr[i]);
    }
    merge_sort(a,0,array_size-1);

    printf("After sorting\n");
    for(int i=0;i<array_size;i++){
        printf("%d",arr[i]);
    }
}
