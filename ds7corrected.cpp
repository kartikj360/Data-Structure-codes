// double linklist
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node * nxt;
    Node *prv;
    static  Node *head;
    static  Node *tail;

    Node(){
        data=-1;
        nxt=NULL;
        prv=NULL;
    }
};

// inserting of node in ll
void  start(Node *n);
void end(Node*n);
void  after(Node*n);
void  before(Node*n);
// deletion of node in ll
void starttDelete(Node *n);
void endDelete(Node *n);
void deleteafter(Node*n);
void deletebefore(Node*n);
//searching the ll
void linearsrch(Node *n);






void printll(Node *n)
    {
        cout<<"Your linked list is :\n";
        int flag=0; Node* temp=new Node(); temp=n->head;
        while(temp!=NULL)
        { 
        cout<<temp->data<<"\t";
        temp=temp->nxt;
        flag++;
        }
        if(flag==0)
        cout<<"Oopsss!!!No data in the linked list\n";
    };

    void start(Node *n)
    {
        Node* temphead=new Node();
        Node* temptail=new Node();
		Node* temp=new Node(); 
        temphead=n->head;
        temptail=n->tail;
        if(temphead==NULL)
        {
        
         cout<<"Enter the value in nxt\n";
         cin>>temp->data;	
         temp->nxt=NULL;  
		 temp->head=temp;
         temp->tail=temp;
		  return;
        }
        else
		{

         cout<<"Enter the value in nxt\n";
         cin>>temp->data ;
         temp->nxt=temphead;
         temp->prv=NULL; 
		 temphead->prv=temp;
         temp->head=temp;

        }
        
    };

    void end(Node* n)
    {
        Node* temp=new Node();
        Node* temphead=new Node();
        Node* temptail=new Node();  
        temphead=n->head;
        temptail=n->tail;
        while(temphead->nxt!=NULL && temptail->prv!=NULL)
        { 
        temphead=temphead->nxt;
        }
        cout<<"Enter the data in the nxt\n";
        cin>>temp->data;	
		temp->nxt=temphead->nxt;
        temp->prv=temphead;
        temphead->tail=temp;
        temphead->nxt=temp;
        

    };

    void  after(Node*n)
    {
        Node* temphead=new Node();
        Node* temptail=new Node();  
        temphead=n->head;
        temptail=n->tail;
        if(temphead==NULL&& temptail==NULL)
        {
        cout<<"Opps!!..Your list is empty\n";
        return;
        }
        else
        {
        int y;
        cout<<"Enter the value after which data you want to ente the new node\n";
        cin>>y;
        while(temphead->nxt!=NULL && temphead->data!=y)
        {
           temphead=temphead->nxt;
        }
        
        if(temphead->data==y)
        {
        Node *temp=new Node();
        cout<<"Enter the value in the linked list\n";
        cin>>temp->data;
        temp->nxt=temphead->nxt;
        temp->prv=temphead;
        temphead->nxt=temp;
        }
        else
        cout<<"Opps!!....Your no. that was ment to be found  doesn't exist in the linked list\n";
        
        }
        
    };

    void  before(Node*n)
    {
        Node* temphead=new Node();
        Node* temptail=new Node();  
        temphead=n->head;
        temptail=n->tail;
         if(temphead==NULL && temptail==NULL){
        cout<<"Opps!!..Your nxt is empty\n";
        return;
        }
        else
        {
        int z;
        cout<<"Enter the value before which data you want to enter the new node\n";
        cin>>z;
        while(temphead->nxt!=NULL && temphead->data!=z)
        {
           temphead=temphead->nxt;
        }
        if(temphead->data!=z)
        cout<<"Opps!!....Your no. that was ment to be found  doesn't exist in the linked list\n";
        else
        {
        Node *temp=new Node();
        cout<<"Enter the value in the linked list\n";
        cin>>temp->data;
        temp->nxt=temphead;
        temp->prv=temphead->prv;
        temphead->prv->nxt=temp;
        temphead->prv=temp;
        }

        }

    };

// deletion of node in ll
void starttDelete(Node *n) 
{
    Node *delptr;
    Node* temphead =new Node();
    temphead=n->head; 
    if(temphead == NULL)
    {
        cout<<"List is empty";
    } 
    else if(temphead->nxt!=NULL)
    { 
        delptr = temphead; 
        temphead->nxt->prv= NULL;
        temphead->head=temphead->head->nxt;
        delete(delptr); 
    } 
};

void endDelete(Node *n)
{

  Node *delptr=new Node();
  Node*temphead =new Node();
    temphead=n->head;
  if(temphead->nxt==NULL)
   cout<<"Opps your nxt is empty..\n";
   else
   {
       while(temphead->nxt->nxt!=NULL )
       {
           temphead=temphead->nxt;
       }
       delptr=temphead->nxt;
       temphead->nxt=NULL;
       temphead=temphead->prv;;
       delete(delptr);
   }
};

void deleteafter(Node*n)
{
    
    Node *delptr=new Node();
    Node*temphead =new Node();
    temphead=n->head;
    if(temphead==NULL)
   cout<<"Opps your nxt is empty..\n";
   else if(temphead->nxt!=NULL)
   {   
       int item;
       cout<<"Enter the value after which you want to delete the node in the list\n";
       cin>>item; temphead=temphead->nxt;
       while(temphead!=NULL && temphead->prv->data!=item )
       {
           temphead=temphead->nxt;
       }
       if(temphead!=NULL)
       {
           if(temphead->nxt!=NULL){
                delptr=temphead;
                temphead->prv->nxt=temphead->nxt;
                temphead->nxt->prv=temphead->prv;
                delete(delptr);
           }
           else{
                delptr=temphead;
                temphead->prv->nxt=temphead->nxt;
                delete(delptr);
           }
       }
       else
       cout<<"Opps!....The item do no exist in the data set";
   }

};

void deletebefore(Node*n)
{
    
    Node *delptr=new Node();
    Node*temphead =new Node();
    temphead=n->head;
    if(temphead->nxt==NULL)
    cout<<"Opps your nxt is empty..\n";
    else
    {   
        int item;
        cout<<"Enter the value before which you want to delete the node in the list\n";
        cin>>item;
        while(temphead->nxt!=NULL && temphead->nxt->data!=item )
            temphead=temphead->nxt;

        if(temphead->nxt!=NULL && temphead->prv!=NULL)
        {
                delptr=temphead;
                temphead->prv->nxt=temphead->nxt;
                temphead->nxt->prv=temphead->prv;
                delete(delptr);
        }
        else if(temphead->prv==NULL && temphead->nxt->data==item){
                delptr=temphead;
                temphead->nxt->prv=temphead->prv; temphead->head=temphead->nxt;
                delete(delptr);
        }
        else
                cout<<"Opps!....The item do no exist in the data set";
    }
};


//searching the ll
void linearsrch(Node *n)
{
    Node *tmp;  
    int i=0,flag=0,item;  
    tmp = n->head;   
    if(tmp->nxt== NULL)  
    {  
        cout<<"\nEmpty List\n";  
    }  
    else  
    {   
        cout<<"Enter the item to be searched in the list\n";
        cin>>item;
        while (tmp!=NULL)  
        {  
            if(tmp->data == item)  
            {  
            cout<<"Item found at location: "<<(i+1)<<endl;
            flag++;
            }   
         i++;
        tmp = tmp ->nxt;  
        }  
        if(flag==0) 
        cout<<"Item not found\n";   
    } 
}

Node* templl=NULL;
Node* Node::head=NULL;
Node* Node::tail=NULL;


int main(int argc, char const *argv[])
{
    int x,y,z;

    char ch='y';

    
    cout<<"Let's create a nxt list\n";
    do{
    cout<<"1.Enter at the start of the linked list\n";
    cout<<"2.Enter at the end of the linked list\n";
    cout<<"3.Enter before a element of the list\n";
    cout<<"4.Enter after the element of the nxt list\n";
    cout<<"\t";
    cin>>x;
    switch (x)
    {
    case 1:start(templl);
           printll(templl);
           cout<<endl;
           break;

    case 2:end(templl);
           printll(templl);
           cout<<endl;
           break;

    case 3:before(templl);
           printll(templl);
           cout<<endl;
           break;

    case 4:after(templl);
           printll(templl);
           cout<<endl;
           break;

    default:cout<<"Invaild option selected\n";
           cout<<endl;
            continue;
    }
    cout<<"\nDo you want to add  node to the linked list(Y/N)?\n";
    cin>>ch;
    }while(ch=='y'|| ch=='Y');

    cout<<"\nYour linked list after all the operation is:\t\t\n";
    printll(templl);

    cout<<"\nDo you want to perform various option in the list(Y,y/N,n)?\n";
    cin>>ch;

    while(ch=='y'|| ch=='Y')
    {
        cout<<"\n1.Search in array\n";
        cout<<"2.Delete in the beggining of the list\n";
        cout<<"3.Delete in the end of the list \n";
        cout<<"4.Deletee after a nxt in the list\n";
        cout<<"5.Delete before a nxt in the list\n";
        cin>>x;
        switch(x)
        {
           case 1:linearsrch(templl);
           printll(templl);
           cout<<endl;
           break;

           case 2:starttDelete(templl);
           printll(templl);
           cout<<endl;
           break;

           case 3:endDelete(templl);
           printll(templl);
           cout<<endl;
           break;

           case 4:deleteafter(templl);
           printll(templl);
           cout<<endl;
           break;

           case 5:deletebefore(templl);
           printll(templl);
           cout<<endl;

           default:cout<<"Invaild option selected\n";
           cout<<endl;
           continue;

        }
        cout<<"\nDo you want to perform more functions(Y/N)?\n";
        cin>>ch;
    }

    cout<<"\nYour linked list after all the operation is:\t\t\n";
    printll(templl);

    cout<<"\nThank you!\n";

    return 0;
}