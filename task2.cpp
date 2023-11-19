#include<iostream>
using namespace std;
main()
{   int count=0;
    int n;
    char letter;
    cout<<"Enter how many words you want to enter: ";
    cin>>n;
    
    string word;
    string words[n];
   
     for(int i=0;i<n;i++)
    {
        cout<<"Enter word "<<i+1<<": ";
        cin>>words[i];
    }
    cout<<"Enter the letter you want to count: ";
    cin>>letter;
    for(int i=0;i<n;i++)
    {
        word=words[i];
        for(int j=0;j<word.length();j++)
        {
            if(words[i][j]==letter)
            {
                count++;  
            }
        }
    }
    
    cout<<letter<<" shows up "<<count<<" times in the data.";
}

