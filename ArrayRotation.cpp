//Program for array rotation

#include <iostream>
#define size 5
using namespace std;

void printArray(int arr[]);
void rotateByOne(int arr[]);
int main()
{
    int i,num,arr[size];
    cout<<"Enter the array elements\n";
    for( i=0;i<size;i++)
      cin>>arr[i];
      
      cout<<"Array before rotation\n";
     printArray(arr);
      
    cout<<"\nEnter the number of times to right rotate\n";
    cin>>num;
    num=num%size;
    
    for(i=1;i<=num;i++)
     rotateByOne(arr);
     
     cout<<"Array after rotation\n";
     printArray(arr);

    return 0;
}
void rotateByOne(int arr[])
{   int j;
    int last=arr[size-1];
    for(j=size-1;j>0;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[0]=last;
    }
void printArray(int arr[])
{
    int i;
    for(i=0;i<size;i++)
     cout<<arr[i]<<"\t";
}
