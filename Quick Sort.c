#include<stdio.h>
void swap(int* a, int* b)
{    int t = *a;
    *a = *b;
    *b = t;}
int div (int arr[], int start, int end)
{    int pivot = arr[end];
    int i = (start - 1),j;
    for (j = start; j <= end- 1; j++)
    {    if (arr[j] < pivot)
        {i++;swap(&arr[i], &arr[j]);}
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}
void quickSort(int arr[], int start, int end)
{    if (start < end)
    {     int p = div(arr, start, end);
		quickSort(arr, start, p-1);
        	quickSort(arr, p+1, end);
    }
}
int main()
{ 	int i;
    int arr[] = {74,52,81,3,69,1};
		printf("Given array:");
		for (i=0; i < 6; i++) printf("%d ", arr[i]);
		printf("\n");
		quickSort(arr, 0, 5);
		printf("Sorted array: \n");
		for (i=0; i < 6; i++) printf("%d ", arr[i]);
		printf("\n");
    return 0;
}

