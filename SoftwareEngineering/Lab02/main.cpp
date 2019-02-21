#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    int i, n, num1, num2, key;
    int arr[20];
    cout<<"\nEnter the number of elements: ";
    cin>>n;
    cout<<"\nEnter the array: ";
    for (i=0; i<n; i++)
        cin>>arr[i];

    mergesort(arr, 0, n-1);

    cout<<"Sorted array: ";
    for (i=0; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<"\n\nEnter the element to search: ";
    cin>>key;

    binarysearch(arr, 0, n-1, key);

    cout<<"\n\nEnter the two numbers: ";
    cin>>num1>>num2;
    cout<<"\nGCD of the two numbers: "<<gcd(num1, num2)<<endl;
    cout<<endl;
	

    return 0;
}
