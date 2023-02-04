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

    int number,product;
    cout<<"Enter number to multiply that number with array: ";
    cin>>number;

    for(int x = 0 ; x < size ; x++)
    {
        product = arr[x]*number;
        cout<<"product is: "<<product<<endl;
    }
}