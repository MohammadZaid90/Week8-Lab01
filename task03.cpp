#include<iostream>
using namespace std;

int main()
{
    float array[4];
    float totalAmount;

    cout<<"Enter the value for the Quaters,Dimes,Nickels,Pennys: ";
    for(int x = 0 ; x < 4 ; x++)
    {
        cin>>array[x];
        cout<<endl;
    }
    
    cout<<"Enter the total amount of the product: ";
    cin>>totalAmount;

    float num1 = array[0] * 0.25;
    float num2 = array[1] * 0.10;
    float num3 = array[2] * 0.05;
    float num4 = array[3] * 0.01;

    float total = num1 + num2 + num3 + num4;

    if(total >= totalAmount)
    {
        cout<<"true";
    }

    else 
    {
        cout<<"false";
    }
}