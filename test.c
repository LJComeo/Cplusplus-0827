#include <stdio.h>
#include <stdlib.h>

void Sort(int * arr, int n)//√∞≈›≈≈–Ú
{
	int i, j;
	int tmp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

void SelectSort(int *arr, int n)//—°‘Ò≈≈–Ú
{
	int temp, min;
	for (int i = 0; i < n - 1; i++) 
	{
		min = i;
		for (int j = i + 1; j < n; j++) 
		{
			if (arr[j] < arr[min])
				min = j;
		}

		if (min != i) 
		{
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}
void InertSort(int *arr, int n)//÷±Ω”≤Â»Î≈≈–Ú
{
	int i, j;
	int tmp;
	for (i = 0; i < n; i++)
	{
		tmp = arr[i];
		for (j = i; j>0 && arr[j - 1] > tmp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = tmp;
	}
}
int main()
{
	int arr[10] = { 5, 8, 3, 7, 6, 0, 1, 2, 9, 4 };
	//Sort(arr, 10);
	//SelectSort(arr, 10);
	InertSort(arr, 10);
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}