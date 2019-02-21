#include <iostream>
#include "functions.h"
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k, n1, n2;
    n1=mid-low+1;
    n2=high-mid;

    int arr1[n1], arr2[n2];

    for (i=0; i<n1; i++)
        arr1[i]=arr[low+i];
    for (j=0; j<n2; j++)
        arr2[j]=arr[mid+1+j];

    i=0;
    j=0;
    k=low;

    while(i<n1 && j<n2)
    {
        if (arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int low, int high)
{

    if (low<high)
    {
        int mid=(low+high)/2;

        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}



