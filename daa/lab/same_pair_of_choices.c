//People are asked to choose a number of their choice and it's recorded in an array "A" of size "n". 
//Given this array to you determine how many pairs(group of 2) of people "p" have selected the same number. 

#include<stdio.h>

int sameNumberPairs(int A[],int  n){
// Write your code here
    int ct = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i] == A[j])
            {
                ct++;
            }
        }
    }
    return ct;
}

int main(){
    int A[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&A[i]);
    }
    int count;
    count = sameNumberPairs(A,n);
    printf("%d",count) ;
}
