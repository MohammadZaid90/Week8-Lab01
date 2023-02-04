#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array you want: ";
    cin>>size;

    int arr[size];

    for(int x = 0 ; x < size ; x++)
    {
        cout<<"Enter elements: ";
        cin>>arr[x];
    }

    for(int x = 0 ; x < size ; x++)
    {
        cout<<"Array Have: "<<arr[x]<<endl;
    }

}