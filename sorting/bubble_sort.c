#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
void input(int *arr, int n);
void bubblesort(int *arr, int n);
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
	bubblesort(arr,n);
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

void bubblesort(int *arr,int n)
{
	int i,j;
	int temp,flag=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
}

void print(int *arr,int n)
{
	int i;
	printf("After sorting array is : ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

