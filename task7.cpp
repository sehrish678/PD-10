#include<iostream>
using namespace std;
main()
{
int length;
cout<<"Enter the length of array: ";
cin>>length;
int arr[length];
cout<<"Enter the elements of the array: "<<endl;
for(int i=0;i<length;i++)
{
    cin>>arr[i];
}
for(int i=0;i<=length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(arr[i]>arr[j])
            {
               
               int var=arr[i];
               arr[i]=arr[j];
               arr[j]=var; 
             
            }
        }
    } 
bool istrue=true;
for(int i=0;i<length-1;i++)
{
    if(arr[i]!=arr[i+1]-1)
    {
        istrue =false;
    }
}
    cout<<"Can be arranged: "<<istrue;
}

