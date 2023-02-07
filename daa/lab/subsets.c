/*
A teacher has to choose a team for the competition, given ids of students and number of students “n” needed for the competition, 
generate all the possible subsets of students.
*/
#include <stdio.h>

void subset(int arr[], int data[], int start, int end, int index, int r)
{
    if (index == r)
    {
        for (int i = 0; i < r; i++)
            printf("%d ", data[i]);
        printf("\n");
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        subset(arr, data, i + 1, end, index + 1, r);
    }
}

void printsubset(int arr[], int n, int r)
{
    int data[r];
    subset(arr, data, 0, n - 1, 0, r);
}

int main()
{
    int arr[50], k, n, i;
    scanf("%d", &n);
    for (  i = 0; i < n; i++)
    {
	    scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    printsubset(arr, n, k);
    return 0;
}
