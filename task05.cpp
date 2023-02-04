#include<iostream>
using namespace std;

int main()
{
    string sentence;

    cout<<"Enter the sentence: ";
    getline(cin,sentence);

    int idx = 0;

    while(sentence[idx] != '\0')
    {
        idx++;
    }

    for(int x = 0 ; x < idx ; x++)
    {
        if((sentence[x] != 'a') && (sentence[x] != 'e') && (sentence[x] != 'i') && (sentence[x] != 'o') && (sentence[x] != 'u'))
        {
            cout<<sentence[x];
        }
    }
}