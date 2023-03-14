#include<stdio.h>
int bs(int a[10],int n,int low,int high,int key);
int main()
{
	int a[10],n,key,low,high;
	printf("Enter the numbers of elements:\t");
	scanf("%d",&n);
	printf("Enter the numbers of elements in sorted order:\t");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the key to be searched:\t");
	scanf("%d",&key);
	
	printf("%d",bs(a,n,0,n-1,key));
}

int bs(int a[10],int n,int low,int high,int key)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
			return mid;
		if(key<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}