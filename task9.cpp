#include<iostream>
using namespace std;

int main()
{
    string word;
    cout<<"Enter the word: ";
    getline(cin , word);

    int idx = 0;

    while(word[idx] != '\0')
    {
        idx++;
    }

    for(int x = idx ; x >= 0 ; x--)
    {
        cout<<word[x]<<endl;
    }
}