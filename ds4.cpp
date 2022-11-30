#include<iostream>
 using namespace std;

 int main(int argc, char const *argv[])
 {    
    int sprsz,arr[4][4],arr2[4][4],arr3[4][4],arr4[4][4],arr5[4][4],arr6[4][4];
    int (*p)[4],(*p2)[4],(*p3)[4],(*p4)[4],(*p5)[4],(*p6)[4],(*sprp)[4];
    p=arr;
    p2=arr2;
    p3=arr3;
    p4=arr4;
    p5=arr5;
    p6=arr6;
    cout<<"\nEnter the values for the 4X4 matrix\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
     {
        cout<<"\nEnter the value in  "<<i<<"  row  "<<j<<"  column\t";
        cin>>arr[i][j];
    }
    }
    cout<<"\nYour array is\t";
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        cout<<*(*(p+i)+j)<<"\t";
    }
    }
cout<<"\nEnter the values for the  second 4X4 matrix\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
     {
        cout<<"\nEnter the value in  "<<i<<"  row  "<<j<<"  column\t";
        cin>>arr2[i][j];
    }
    }
    cout<<"Your array is\t";
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        cout<<*(*(p2+i)+j)<<"\t";
    }
    }
    cout<<"\nNow lets add the two matrixes\n";
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
     {
        arr[i][j]=arr[i][j]+arr2[i][j];
    }
    }
    cout<<"\nYour array after the addition\t";
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        cout<<*(*(p+i)+j)<<"\t";
    }
    }
    cout<<"\nMultiplication of these two matrixes(first and second matrix)\n";
     for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
         for(int k=0;k<4;k++)
          arr3[i][j]=arr[i][k]*arr2[k][j];
    }
    }
    cout<<"\n Your matrix after getting multiplied is\n";
     for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        cout<<*(*(p3+i)+j)<<"\t";
    }
    }
    cout<<"\n Now lets scale the above matrix by degrading the matrix by 2\n";
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
            arr3[i][j]=arr3[i][j]-2;
    }
    }
    cout<<"\nYour matrix after getting scaled\n";
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        cout<<*(*(p3+i)+j)<<"\t";
    }
    }
    cout<<"\nNow lets transpose the above matrix\n";
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        arr4[j][i]=arr3[i][j];
    }
    }
    cout<<"\nYour matrix after gettimg transposed\n";
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        cout<<*(*(p4+i)+j)<<"\t";
    }
    }
    cout<<"\nNow lets create a lower triangular matrix\n";
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
         
         if(i>=j)
         {
             cout<<"\nEnter the value in  "<<i<<"  row  "<<j<<"  column\t";
             cin>>arr5[i][j];
         }
             else
             {
             arr5[i][j]=0;
             }
     }
    }
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        cout<<*(*(p5+i)+j)<<"\t";
    }
    }
     cout<<"\nNow lets create a upper triangular matrix\n";
    for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
         
         if(i<=j)
         {
             cout<<"\nEnter the value in  "<<i<<"  row  "<<j<<"  column\t";
             cin>>arr6[i][j];
         }
             else{

             arr6[i][j]=0;
             }
     }
    }
      for(int i=0;i<4;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        cout<<*(*(p6+i)+j)<<"\t";
    }
    }
    cout<<"\n Now lets create a sparse matrix of the above matrix\n";
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
     {
        if(arr6[i][j]!=0)
            sprsz+=1;
            else
            cout<<endl;
        }
    }
    
     int indx,spr[sprsz][4];
      for(int i=0;i<sprsz;i++)
    {
        for(int j=0;j<4;j++)
     {
        spr[i][j]=arr6[i][j];

    }
    sprp=spr;
    }
     for(int i=0;i<sprsz;i++)
    {
        cout<<endl;
        for(int j=0;j<4;j++)
     {
        cout<<*(*(sprp+i)+j)<<"\t";
    }

    }
     return 0;
 }

 
