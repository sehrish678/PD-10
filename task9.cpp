#include<iostream>
using namespace std;
int special(int number,int arr[]);
main()
{
    int number;
    cout<<"Enter the length of the array: ";
    cin>>number;
    int arr[number];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    int result;
    result=special(number,arr);
    cout<<"Special value: "<<result<<endl;
}
int special(int number,int arr[])
{
    int count=0;
    for(int i=0;i<=number;i++)
    {
        for(int j=0;j<number;j++)
        {
            if(arr[j]>=i)
            {
                count++;
            }

        }
        if(count == i)
        {
            return i;
        }
        count = 0;
    }
     return -1;
    
}