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
        cout<<"The character is at index "<<idx<<" is "<<word[idx]<<endl;
        idx++;
    }
}