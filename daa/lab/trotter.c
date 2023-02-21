#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define MAX 100
#define R_t_L false
#define L_t_R true

bool isMobile(int* arr, bool* direction, int index, int n)
{
	if (direction[index] && (index+1) < n)
	{
		if(arr[index] > arr[index+1])
			return true;
	}
	else if (!direction[index] && (index-1) >= 0)
	{
		if (arr[index] > arr[index - 1])
			return true;
	}
	return false;
}

int getLargestMobileElement(int* arr, int n, bool* direction)
{
	int max=0;
	int position = -1;
	for (int i = 0; i < n; i++)
	{
		if (isMobile(arr,direction,i,n) && arr[i] > max)
		{
			max = arr[i];
			position = i;
		}
	}

	return position;
}

void swap(int* arr, bool* direction, int pos1, int pos2)
{
	int temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;

	bool TF = direction[pos1];
	direction[pos1] = direction[pos2];
	direction[pos2] = TF;
}

void updateDirection(int* arr, bool* direction, int n, int mobileElement)
{
	for (int i = 0; i < n; i++)
	{
		if (mobileElement < arr[i])
		{
			direction[i] = !direction[i];
		}
		printf("%d(%d)\t", arr[i], direction[i]);
	}
	printf("\n");
}

int main()
{
	int* arr;
	bool* direction;
	int n = 5;
	int position;

	printf("Enter an Integer\n");
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int)*n);
	direction = (bool*)malloc(sizeof(bool)*n);

	//initialize arr

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
		direction[i] = false;
		printf("%d(%d)\t", arr[i], direction[i]);
	}
	printf("\n");
		//Step1 : get the largest mobile element
		while((position = getLargestMobileElement(arr, n, direction))!=-1)
		{
			//Step2 : swap the largest element with the adjecent element in 
			//        the direction of the largest element
		
			if (direction[position] == true)
			{
				swap(arr,direction, position, position+1);
				position++;
			}
			else
			{
				swap(arr, direction, position, position-1);
				position--;
			}
	
			//Step3 : Change the direction of all the elements greater than the largest mobile element
			updateDirection(arr, direction, n, arr[position]);

		}

}