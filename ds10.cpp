#include<iostream>
#include<stdio.h>

using namespace std;
class NODE{
    char a;
    NODE *left;
    NODE *right;

  NODE(){
      a=NULL;
      left=NULL;
      right=NULL;
  }

static void insert(NODE *X)
{
    NODE*prnt=X;
    cout<<"Enter the value in the node";
    cin>>prnt->a;
    cout<<"Select the option of your choice";
    cout<<"1.LEFT";
    cout<<"2.RIGHT";
    cout<<"3.BOTH";


};


};

int main(int argc, char const *argv[])
{
    NODE * parent= new NODE();


    
    return 0;
}
