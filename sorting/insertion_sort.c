#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
void input(int *arr, int n);
void insertion_sort(int *arr, int n);
void print(int *arr,int n);
int main()
{
	int n;
	int arr[100];
	printf("enter the number of array elements:");
	__fpurge(stdin);
	scanf("%d",&n);
	if(n<=0)
	{
		printf("No of elements are invalid");
		return 0;
	}
	input(arr,n);
	insertion_sort(arr,n);
	print(arr,n);
}

void input(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter the array:");
		__fpurge(stdin);
		scanf("%d",&arr[i]);   
	}
}

void insertion_sort(int *arr,int n)
{
	int i,j;
	int temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j] > temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}


void print(int *arr,int n)
{
	int i;
	printf("After sorting array is : ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

