#include<iostream>
using namespace std;

int main()
{
    string word;

    cout<<"Enter the word: ";
    getline(cin,word);

    int idx = 0;
    cout<<"word"<<"\t"<<"location"<<endl;
    while(word[idx] != '\0')
    {
        cout<<word[idx]<<"\t"<<idx<<endl;
        idx++;
    }
}