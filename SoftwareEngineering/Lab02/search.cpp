#include <iostream>
#include "functions.h"
using namespace std;

void binarysearch(int arr[], int first, int last, int key)
{
    int mid=(first+last)/2;
    while(first<=last)
    {
        if (arr[mid]<key)
            first=mid+1;
        else if (arr[mid]>key)
            last=mid-1;
        else
        {
            cout<<"Element found at position "<<mid+1;
            break;
        }
        mid=(first+last)/2;
    }
    if (first>last)
        cout<<"Element not found";
}

