#include<iostream>
using namespace std;

int main()
{
    int size;
    int flag;
    cout<<"Enter the size of array you want: ";
    cin>>size;

    int arr[size];

    for(int x = 0 ; x < size ; x++)
    {
        cout<<"Enter Elements: ";
        cin>>arr[x];
    }

    int number;
    cout<<"Enter number to check it is exist in array: ";
    cin>>number;

    for(int x = 0 ; x < size ; x++)
    {
        if(arr[x] == number)
        {
           flag = true;
        }
    }

    if(flag == 1)
    {
        cout<<"This number is exist in this array";
    }

    else if(flag == 0)
    {
        cout<<"This number is not exist in this array";
    }
}