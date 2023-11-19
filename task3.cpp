#include<iostream>
using namespace std;
bool Cycle(int arraylength,int cycle,int arr[]);
main()
{
    int arraylength;
    cout<<"Enter the length of the array: ";
    cin>>arraylength;
    int arr[arraylength];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<arraylength;i++)
    { 
        cin>>arr[i];
    }
    int cycle;
    cout<<"Enter the length of the cycle: ";
    cin>>cycle;
    int result;
    result=Cycle(arraylength,cycle,arr);
    cout<<"Output: "<<result;
}
bool Cycle(int arraylength,int cycle,int arr[])
{
     for(int i=0;i<arraylength;i++)
    { 
        
        if(arr[i]==arr[i+cycle])
        {
            
             return true;
        }
        else if(cycle>arraylength)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}