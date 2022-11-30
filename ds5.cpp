// Buble sort:

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{  
    int size=0,pass=0,swap=0;
    cout<<"\nEnter the size of the array\n";
    cin>>size;
    int arr[size],arr2[size],arr3[size];
  

    cout<<"\nNow lets enter the values in the array"<<endl;
       for(int i=0;i<size;i++)
       {
       cout<<"\nEnter the value in the  "<<i<<"  Index\t";
       cin>>arr[i];
   }
    cout<<"\nYour array is\n";
    for(int z=0;z<size;z++)
    {
      arr2[z]=arr[z];
      arr3[z]=arr[z];
      cout<<arr[z]<<"\t";
      
    }

   int temp;
   for(int x=size-1;x>=0;x--)
       {
       	pass++;
   for(int j=0;j<x;)
   {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        j++;
          swap++;
      }
      else
      j++;
       
       cout<<"\nThe array after the opertion\n";
       for(int z=0;z<size;z++)
      cout<<arr[z]<<"\t";

   }
   }
   cout<<"\n\n\nArray after complete operations by bubble sort\n";
   for(int z=0;z<size;z++)
      cout<<arr[z]<<"\t";
        cout<<"\nNumber of passes are\t"<<pass;
        cout<<"\nNumber of swaps are\t"<<swap;





// Selection sort :
   cout<<"\n\n\n\n";
    int min,temp2,x,pass2=0,swap2=0;
    cout<<"\nYour array is\n";
    for(int z=0;z<size;z++)
    {
      cout<<arr2[z]<<"\t";
      
    }
       cout<<"\n Now let's sort the array by selection sort\n";
       for(int  sz=0;sz<size;sz++)
       {
           x=sz;	pass2++;
           min=arr2[sz];
          for(int y=sz;y<size;y++)
          {
             
              if(min>arr2[y])
              {     
              min=arr2[y];
              x=y;
              }
              
          }
          temp2=arr2[sz];
          arr2[sz]=min;
          arr2[x]=temp2;
          swap2++;

          cout<<"\nArray after operation\n";
          for(int j=0;j<size;j++)
            cout<<arr2[j]<<"\t";
       }
      
       cout<<"\nArray after compelete operations\n";
       for(int j=0;j<size;j++)
       cout<<arr2[j]<<"\t";
       cout<<endl;
         cout<<"\nNumber of passes are\t"<<pass2<<endl;
        cout<<"\nNumber of swaps are\t"<<swap2<<endl;





// Insertion sort:
   cout<<"\n\n\n";
    int pass3=0,swap3=0,temp3=0,z=0;

   cout<<"\nYour array is\n";
    for(int z=0;z<size;z++)
    {
      
      cout<<arr3[z]<<"\t";
      
    }

      for(int k=1;k<size;k++)
      {
          pass3++;  
          temp3=arr3[k];
          for(z=k-1;z>=0;z--)
          {
          if(temp3<=arr3[z])
          {
          arr3[z+1]=arr3[z];
          swap3++;
          }
          else
          break;
          }
          
          arr3[z+1]=temp3;
          cout<<"\nArray after operation\n";
          for(int j=0;j<size;j++)
           cout<<arr3[j]<<"\t";

        }
        
        cout<<"\nYour array after getting sorted by insertion sort\n";

    for(int j=0;j<size;j++)
    cout<<arr3[j]<<"\t";
    cout<<endl;
    cout<<"\nNumber of passes are\t"<<pass3+1<<endl;
    cout<<"\nNumber of swaps are\t"<<swap3<<endl;

    return 0;

}