#include<iostream>
using namespace std;

int main()
{
    string sentence;
    string word = "something ";

    string arr[100];

    cout<<"Enter the sentence: ";
    getline(cin,sentence);

    int count=0;
    int idx = 0;

    while(sentence[idx] != '\0')
    {
        idx++;
    }

    while(word[count] != '\0')
    {
        count++;
    }

    int ttl = idx+count;
    
        for(int x = 0 ; x < count ; x++)
    {
        arr[x] = word[x];

        for(int j = 0 ; j < idx ; j++)
        {
            arr[j+count] = sentence[j];
        }
    }

    for(int i = 0 ; i < ttl ; i++)
    {
        cout<<arr[i];
    }

    
}