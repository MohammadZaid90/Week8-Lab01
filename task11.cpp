#include<iostream>
using namespace std;

int main()
{
    string word;
    cout<<"Enter the word: ";
    getline(cin , word);

    int idx = 0;
    int count = 0;

    while(word[idx] != '\0')
    {
        idx++;
    }

    for(int x = idx ; x >= 0 ; x--)
    {
        if(word[x] == 'a' || word[x] == 'e' || word[x] == 'i' || word[x] == 'o' || word[x] == 'u')
        {
            count++;
        }
    }
    cout<<count;
}