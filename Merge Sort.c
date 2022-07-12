#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int first[n1], last[n2];
    for (i = 0; i < n1; i++)
        first[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        last[j] = arr[m + 1 + j];

    i = 0; j = 0;  k = l;
    while (i < n1 && j < n2) {
        if (first[i] <= last[j]) {
            arr[k] = first[i];
            i++;
        }
        else {
            arr[k] = last[j];
            j++;
        }
        k++;    }
    while (i < n1) {
        arr[k] = first[i];
        i++; k++;    }
    while (j < n2) {
        arr[k] = last[j];
        j++;k++;    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    int arr[6];
    int i;
    printf("Enter elements of array: \n");
    for(i=0;i<6;i++)
     scanf("%d",&arr[i]);
    mergeSort(arr, 0, 5);
    printf("\nAfter applying merge Sort: ");
    for(i=0;i<6;i++) printf(" %d",arr[i]);
    return 0;
}

