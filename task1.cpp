#include<iostream>
using namespace std;
int numofmiles(int run[],int totaldays);
 int count=0;
main()
{   
    int totaldays;
    cout<<"Enter the number of Saturdays: ";
    cin>>totaldays;
    int run[totaldays];
    for(int i=0;i<totaldays;i++)
    {
        cout<<"Enter miles run for Saturday "<<i+1<<": ";
        cin>>run[i];
    }
    int result;
    result=numofmiles(run,totaldays);
    cout<<"Total progress days: "<<result;
}
int numofmiles(int run[],int totaldays)
{   
    for(int i=0;i<totaldays-1;i++)
    {  
        if(run[i]<run[i+1])
        {   
            count++;
        }
    }
    return count;
}
    