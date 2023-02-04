#include<iostream>
using namespace std;

int main()
{
    string name;
    int flag;
    cout<<"Enter the name: ";
    getline(cin , name);

    int idx = 0;

    while(name[idx] != '\0')
    {
        idx++;
    }

    char letter;
    cout<<"Enter 1 letter: ";
    cin>>letter;

    for(int x = 0 ; x < idx ; x++)
    {
        if(name[x] == letter)
        {
            flag = true;
            break;
        }
    }

    if(flag == true)
    {
        cout<<"Letter found in this array";
    }

    else
    
    {
        cout<<"Letter not found in this array";
    }
}