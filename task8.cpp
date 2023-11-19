#include<iostream>
using namespace std;
int arraylength;
int output=0;
int alternation=0;
main()
{   
    cout<<"Enter the length of the array: ";
    cin>>arraylength;
    string arr[arraylength];
    cout<<R"(Enter the elements of array ("left" or "right"):)"<<endl;
    int right=90;
    int left=-90;
    for(int i=0;i<arraylength;i++)
    {
        cin>>arr[i];
        if(arr[i]=="left")
        {
            output=output+left;
        }
        else if(arr[i]=="right")
        {
            output=output+right;
        }
        if(output>=360)
        {
            output=output-360;
            alternation++;
        }
    }
    cout<<"Number of full rotations: "<<alternation;
}