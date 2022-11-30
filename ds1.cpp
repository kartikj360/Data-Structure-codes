#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    int size,x=0;
    cout<<"enter the size of the array";
    cin>>size;
    int a[size];
    while(true)
    {
      if(x==size)
      {
          cout<<"array index overflow,no more values can be entered!! ";
        break;
      }
      else
      {
      cout<<"Enter the value in array of \t"<<x<<"\tindex";
      cin>>a[x];
      x++;

     }
    }
    return 0;
}
