#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array you want: ";
    cin>>size;

    int arr[size];
    int sum = 0;
    int avg;

    for(int x = 0 ; x < size ; x++)
    {
        cout<<"Enter Elements: ";
        cin>>arr[x];

        sum =  sum + arr[x];
    }

    avg = sum/size;

    cout<<"sum = "<<sum<<endl;
    cout<<"average = "<<avg;
}