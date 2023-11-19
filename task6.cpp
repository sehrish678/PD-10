#include<iostream>
using namespace std;
string Reverseorder(string phrase);
main()
{
    string phrase;
    cout<<"Enter a string: ";
    getline(cin,phrase);
    string result;
    result= Reverseorder(phrase);
    cout<<"Reversed string: "<<result;
}
string Reverseorder(string phrase)
{
    string output= " ";
    int index=0;
    string words[10000];
    string letter= "";
    for(int i=0;i < phrase.length() ; i++)
    {
        if(phrase[i] != ' ')
        {
            letter=letter+phrase[i];
        }
        else 
        {   
            words[index]=letter;
            index++;
            letter=" ";
        }
    }
    words[index]= letter;
    for(int i=index ; i >=0; i--)
    {
        output+= words[i]+ " ";
       
    }
     return output;
}