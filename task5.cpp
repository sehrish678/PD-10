#include<iostream>
using namespace std;
int Cycle(int packages[],int conversion);
main()
{
int packages[10];
cout<<"Enter the weights of the 10 packages: "<<endl;
for(int i=0;i<10;i++)
{
    cin>>packages[i];
}
for(int i=0;i<=10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(packages[i]>packages[j])
            {
               
               int var=packages[i];
               packages[i]=packages[j];
               packages[j]=var; 
            }
        }
    }
    cout<<"Sorted array in ascending order: ";
    cout<<"[";
    for(int i=0;i<10;i++)
    {
        cout<<packages[i];
        if(i!=9)
        {
            cout<<", ";
        }

    }
    cout<<"]";

}