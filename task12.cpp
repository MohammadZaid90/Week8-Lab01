#include<iostream>
using namespace std;

int main()
{
    string character = "abcdefghijklmnopqrstuvwxyz";
    string word;
    int idx = 0;
    int count=0;
    
    cout<<"Enter the word : ";
    cin>>word;

    while(character[idx] != '\0' )
    {
        idx++;
    }


     while(word[count] != '\0' )
    {
        count++;
    }


    for(int i = 0 ; i < count ; i++)
    {
        for(int j = 0 ; j < idx ; j++)
        {
            if(word[i] == character[j])
            {
                cout<<character[j+1];
            }
        }
    }
}