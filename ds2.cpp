// #include<iostream>
// using namespace std;
 
// int max(int lb,int ub);
// int minm(int lb,int ub);
// int srch(int lb,int ub);
// void enterind(int lb,int ub,int n);
// void enterend(int lb,int ub,int n);
// int delind(int lb,int ub,int n);
// int delend(int lb,int ub,int n);
// void display(int x[]);

// int main(int argc, char const *argv[]) 
//  {
//      int *p,v,size=0,mini=0,maxi=0,lb,ub,n,i;
//      char check='y';
//     cout<<"Welcome to array";
//     while(check=='y'|| check=='Y')
//     {
//     cout<<"Select the option to go with";
//     cout<<"1.To Enter value in the enter";
//     cout<<"2.To display the content of the array";
//     cout<<"3.To Enter the value at the end of array";
//     cout<<"4.To Enter the value at the first of the array";
//     cout<<"5.To Del the end value of the array";
//     cout<<"6.To Delete the first value of the array";
//     cout<<"7.To search the number in the array";
//     cout<<"8.To find the max value in the array";
//     cout<<"9.To find the min value in the array";
//     int y;
//     cin>>v;
//     switch(v)
//     {
//       case 1:{
//               cout<<"Enter the size of array";
//               cin>>size;
//               int a[size],temp[size],i=0;
//               cout<<"If you want to leave a blank space in the array please enter 0";
//                for(int x=0;x<size;x++)
//                {
//                 cout<<"Enter the value in\t "<<i<<"index";
//                 cin>>a[x];
//                }
//                cout<<"You want to go to back menu";
//                cin>>check;
   
//               } break;
//       case 2:display(p);
//              cout<<"You want to go to back menu";
//              cin>>check;
//              break;
//       case 3:enterind(lb,ub,n);
//              cout<<"You want to go to back menu";
//              cin>>check;  
//              break;
//       case 4:enterend(lb,ub,n);
//              cout<<"You want to go to back menu";
//              cin>>check;
//              break;
//       case 5:delend(lb,ub,n);
//              cout<<"You want to go to back menu";
//              cin>>check;
//              break;
//       case 6:delind(lb,ub,n);
//              cout<<"You want to go to back menu";
//              cin>>check;
//              break;
//       case 7:srch(lb,ub);
//              cout<<"You want to go to back menu";
//              cin>>check;
//              break;
//       case 8:minm(0,size);
//              cout<<"You want to go to back menu";
//              cin>>check;
//              break;
//       case 9:max(0,size);
//              cout<<"You want to go to back menu";
//              cin>>check;
//              break;

//     }
    
//  }
//   int srch(int lb,int ub,int i){
//   	int y;
//     cout<<"Enter the no to find in the array";
//              cin>>y;
//              if(y==0)
//              cout<<"The number is not found";
//              else
//              cout<<"The number is found at"<<y<<"position";
//    int flag=0;
//     do{
//         if(i==a[lb])
//           flag=1;
//           else
//           lb++;

//     }while(ub--);
//    if(flag)
//    return lb;
//    else 
//    return flag; 
    
//    }

//    void enterind(lb,ub,n)
//    { 
//      int o;  
//      do{
//        if(ub=!n)
//         cout<<"Array out of bound";
//         else
//         {
//           cout<<"Enter the value to be added at the index";
//           cin>>o;
//         if(a[lb]==0)
//          a[lb]=o;
//          else
//              {
//               temp[0]=o;
//               for(int t=1;t<=(ub+1);t++)
//               temp[t]=a[t-1];

//               }
//         }
//           }
//         for(t=0;t<=ub;t++)
//         cout<<temp[t];
//     }
 
    
//    void enterend(lb,ub,n)
//    {
//      int p;  
//      do{
//        if(ub=!n)
//         cout<<"Array out of bound";
//         else{
//           cout<<"Enter the value to be added at the end";
//           cin>>p;
//           a[ub+1]=p;
//              }
//          }
//       for(int t=0;t<=ub;t++)
//    cout<<a[t];
//    }

//  void max(lb,ub)
//  {
//     maxi=a[lb];
//     do{
//        if(maxi>a[in])
//         maxi=a[in];
//         else
//         in++
//     }while(ub--);
//     cout<<"The mx value is"<<a[k]<<"at "<<k+1<<"Postiton";
//   }
  
// void minm(lb,ub){
//    mini=a[lb];
//     do{

//       if(mini<a[in])
        
//              mini=a[i];
//     else
//         in++;
//     }while(ub--);
//     cout<<"The min value is "<<a[y]<<"at "<<y+1<<"Position";
//     }

// int delind(lb,ub,n)
// {
//   cout<<"Now we will delete the index value of the array";
//   if(lb==n)
//   cout<<"no value in array";
//   else{
//  if(a[lb]==0)
//    cout<<"Array underflow";
//    else
//   { for(int q=0;q<=ub;q++)
//    temp[q]=a[q+1];
//   }
//  return temp;
 
// }
// }

// int delend(lb,ub,n)
// {
//   cout<<"Now we will delete the index value of the array";
//   if(lb==n)
//   cout<<"no value in array";
//   else{
//     if(ub==lb)
//     cout<<"The array has just element and now the array will be empty";
//     else
//     a[ub]=0;

//   }
//   return a;

// }

// void display(p)
// {
//   for(z=0;z<(ub-1);z++)
//     cout<<*(p+z);
// }










#include <iostream>
#include <limits.h>
using namespace std;
// prototypes of all the used functions in the program
int insrt(int sz,int arr[],int UB,int n);
int del(int sz,int arr[],int UB,int n);
void dsply(int sz,int arr[]);
void srch(int sz,int arr[]);
void min_max(int sz,int arr[]);


// main function
int main()
{
    int sz,UB=-1,n=0,i=0;
    cout<<"Enter the size of the array you want\n"<<endl;
    cin>>sz;
    int arr[sz];
    char check='y';
    while(check=='y' && i<sz)
    {
        cout<<"Enter the value of arr["<<i<<"] th element:- \n";
        cin>>arr[i];
        i++;
        n++;
        UB++;
        
        cout<<"\nWant to add more values(y/n):- \n";
        cin>>check;
    }
    for(int t=UB+1;t<sz;t++)
    {
        arr[t]=0;
    }
    
    insrt(sz,arr,UB,n);
    dsply(sz,arr);
    del(sz,arr,UB,n);
    dsply(sz,arr);
    srch(sz,arr);
    min_max(sz,arr);
    return 0;
}



int insrt(int sz,int arr[],int UB,int n)
{
    int loc,val;
    cout<<"Enter the index where you want to insert the value\n";
    cin>>loc;
       if(loc>=sz)
       {
        cout<<"Array Overflow\n";
        return 0;
    }
    else
    {
         if(loc==UB+1)
         {
        int d;
        cout<<"Enter the value to insert at the end of array\n"<<endl;
        cin>>d;
        arr[UB+1]=d;
        UB++;
        n++;
        return arr[sz];
         }
        else if(loc<=UB){
         for(int p=UB;p>=loc;p--){
             arr[p+1]=arr[p];
        }
        cout<<"Enter the value to enter at "<<loc<<" index\n";
        cin>>val;
        arr[loc]=val;
        return arr[sz];
    }
    else
    {
        cout<<"Enter the value to enter at "<<loc<<" index\n";
        cin>>val;
        for(int r=UB+1;r<=loc;r++){
            arr[r]=0;
        }
        arr[loc]=val;
    }
 
}

}


void dsply(int sz,int arr[])
{
    cout<<"Array obtained is:- \n";
    for(int k=0;k<sz;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}


int del(int sz,int arr[],int UB,int n)
{
    int loc;
    if(UB==-1 || n==0)
    {
        cout<<"Array underflow\n";
        return 0;
    }
    else
    {
        cout<<"Enter the index where to delete key:- \n";
        cin>>loc;
        if(loc==UB){
            arr[UB]=0;
            UB--;
            n--;
            return arr[sz];
        }
        else
        {
            for(int l=loc+1;l<=UB;l++)
            {
                arr[l-1]=arr[l];
                UB--;
                n--;
                return arr[sz];
            }
        }
    }
}


void srch(int sz,int arr[])
{
    int key,loc,found=0;
    cout<<"Enter the element to be searched\n:- ";
    cin>>key;
    for(int z=0;z<sz;z++)
    {        
        if(arr[z]==key)
        {
            found++;
            loc=z;
        }
    }
    if(found>0)
    {
        cout<<"Element is found at index "<<loc<<" in the array\n";
    }
    else
    {
        cout<<"Element  not found\n";
    }
}


void min_max(int sz,int arr[])
{
    int min=INT_MAX,max=INT_MIN, max_loc, min_loc; 
    // use of the limits header file
    for(int y=0;y<sz;y++){
        if(arr[y]<min){
            min=arr[y];
            min_loc=y;
        }
        if(arr[y]>max)
        {
            max=arr[y];
            max_loc=y;
        }
    }
    cout<<"\nThe minimum value in the array is  "<<min<<" at the index "<<min_loc<<endl;
    cout<<"\nThe maximum vaule int the array is"<<max<<" at the index "<<max_loc<<endl;
}
