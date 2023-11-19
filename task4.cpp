#include<iostream>
using namespace std;
int calculatetotalvolume(int boxsize,int arr[]);
main()
{
    int boxsize;
    cout<<"Enter the number of boxes: ";
    cin>>boxsize;
    int arr[boxsize];
    cout<<"Enter the dimensions of the boxes (length, width, height): "<<endl;
    for(int i=0;i<(boxsize*3);i++)
    {
        cin>>arr[i];
        
    }

    int totalvolume=0;
    for(int i=0;i<(boxsize*3);i+=3)
    {
        int length=arr[i];
        int width=arr[i+1];
        int height=arr[i+2];
        int boxvolume=height*length*width;
        totalvolume=totalvolume+boxvolume;
    }
    
       cout<<"Total volume of all boxes: "<<totalvolume;
}