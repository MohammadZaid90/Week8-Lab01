#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;

    for(int x = 0 ; x < 5 ; x++)
    {
        cout<<"Enter Elements: ";
        cin>>arr[x];
        sum = sum + arr[x];
    }

    cout<<"Sum = "<<sum;
}