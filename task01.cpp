#include<iostream>
using namespace std;

int main()
{
    int sizearr1 = 2;
    int sizearr2;

    cout<<"Enter size for array 2: ";
    cin>>sizearr2;

    int totalarrsize = sizearr1+sizearr2;

    int arr1[sizearr1];
    int arr2[sizearr2];

    for(int i = 0 ; i < sizearr1 ; i++)
    {
        cout<<"Enter value for array 1: ";
        cin>>arr1[i];
    }

    for(int j = 0 ; j < sizearr2 ; j++)
    {
        cout<<"Enter value for array 2: ";
        cin>>arr2[j];
    }

    int arr3[totalarrsize];

        arr3[0] = arr1[0];

        for(int y = 1 ; y < totalarrsize ; y++)
        {
            arr3[y] = arr2[y-1];
        }

        arr3[totalarrsize] = arr1[1];

        for(int x = 0 ; x < totalarrsize ; x++)
        {
            cout<<" "<<arr3[x];
        }
        cout<<"0";
    
}