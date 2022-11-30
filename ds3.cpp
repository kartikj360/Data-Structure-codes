#include<iostream>
using namespace std;

int binsrch(int ar[],int strt,int sz,int y);
int main(int argc, char const *argv[])
{
    int size,srchvar,flag;
    cout<<"Enter the size of the array\t";
    cin>>size;
    int arr[size];
    cout<<"Now lets enter the value in the array,please enter the value in accesending way \n";
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the value in "<<i<<"index of the array\t";
    cin>>arr[i];
      }
    cout<<"Enter the number to be searched\t";
    cin>>srchvar;
    flag=binsrch(arr,0,size-1,srchvar);
    if(flag==-1)
    cout<<"Element not found";
    else
    cout<<"Element found in the array at "<<flag<<"index";

    return 0;
}
int binsrch(int ar[],int strt,int sz,int y)
{
   if(sz>=strt){
    int mid=strt+(sz-1)/2;
    if(y==ar[mid])
        return mid;
        else
        {
        if(ar[mid]>y)
            return binsrch(ar,strt,mid-1,y);
        else
            return binsrch(ar,mid+1,sz,y);
            }
    }
    else
    return -1;
}



































