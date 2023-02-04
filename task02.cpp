#include<iostream>
using namespace std;

int main()
{
    int size;
    float sum = 0; 

    cout<<"Enter the size of array you want: ";
    cin>>size;

    float resistance[size];

    for(int x = 0 ; x < size ; x++)
    {
        cout<<"Enter the resistance of RT: R"<<x+1<<" ";
        cin>>resistance[x];
        sum = sum + resistance[x];
    }

    cout<<"Answer is: "<<sum<<" ohms";
}