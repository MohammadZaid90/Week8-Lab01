#include<iostream>
using namespace std;

int main()
{
    int size;
    int larger = -100;
    cout<<"Enter the size of array you want: ";
    cin>>size; 

    int arr[size];

    for(int x = 0 ; x < size ; x++)
    {
        cout<<"Enter Elements: ";
        cin>>arr[x];
    }

    for(int x = 0 ; x < size ; x++)
    {
        if(arr[x] > larger)
        {
            larger = arr[x];
        }
    }
    
    cout<<"larger number in this array is: "<<larger;
}