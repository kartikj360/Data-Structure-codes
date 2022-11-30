#include<iostream>
#include<stdio.h>

using namespace std;

class Node
{
public:
int ht;
int data;
Node* lft;
Node* rgt;


};

int height(Node *n)
{
    if(n=NULL)
       return 0;
   return n->ht;

}

Node * newNode(int data)
{
 Node* node=new Node();
 node->data=data;
 node->lft=NULL;
 node->rgt=NULL;
 node->ht=1;
 
 return(node);

}

Node *LL(Node*k)
{
    Node* temp=k->lft;
    Node* temp2=temp->rgt;
    
    // rotation
    temp->rgt=k;
    k->lft=temp2;

    // changing height 
    k->ht=(height(k->lft)>height(k->rgt))?
    height(k->lft)+1:height(k->rgt)+1;

    temp->ht=(height(temp->lft)>height(temp->rgt))?
    height(temp->lft)+1:height(temp->rgt)+1;

    return temp;


}

Node *RR(Node *k)
{
    Node *temp=k->rgt;
    Node *temp2=temp->lft;

    // rotation
    temp->lft=k;
    k->rgt=temp2;

    // changing height 

    k->ht=(height(k->lft)>height(k->rgt))?
    height(k->lft):height(k->rgt);

    temp->ht=(height(temp->lft)>height(temp->rgt))?
    height(temp->lft):height(temp->rgt);

    k->ht+=1;
    temp->ht+=1;

    return temp;

}

int balance(Node*n)
{
    if(n==NULL)
       return 0;
   return height(n->lft)-height(n->rgt);

}

Node *insertation(Node *node,int data)
{
     if(node==NULL)
       return(newNode(data));
   
   if(data<node->data)
      node->lft=insertation(node->lft,data);
      else
       if(data>node->data)
         node->rgt=insertation(node->rgt,data);
        else 
        return node;

        // changing height 
        node->ht= (height(node->lft)>height(node->rgt))?
    height(node->lft):height(node->rgt);
    node->ht+=1;

    // check balance factor 
    int factor=balance(node);

    // if we found unbalance then we do 4 case check then make changes in the node 

    // case 1: LL 
    if(factor>1 && data<node->lft->data)
      return LL(node);


    // case 2: RR
    if(factor<-1 && data>node->rgt->data)
       return RR(node);


    // case 3: LR 
    if(factor>1 && data>node->lft->data)
    {
        node->lft=RR(node->lft);
        return LL(node);
    }
    // case 4:RL 
    if(factor<-1 && data<node->rgt->data)
    {
        node->rgt=LL(node->rgt);
        return RR(node);
    }

    return node;
}

void prorder(Node *root)
{
    if(root!=NULL)
     {
         cout<<root->data<<endl;
         prorder(root->lft);
         prorder(root->rgt);
     }

}


int main()
{
    Node *root=NULL;

    root=insertation(root,20);
    root=insertation(root,10);
    root=insertation(root,30);
    root=insertation(root,50);
    root=insertation(root,25);
    root=insertation(root,70);
    root=insertation(root,80);

    cout<<"The Pre order traversal of the tree is :";
    prorder(root);

    return 0;
}