// // linklist
// #include<iostream>
// using namespace std;

// class Node
//     {
//     public:
//     int data;
//     Node * link;
//     };

// // inserting of node in ll
// void  start(Node **n);
// void end(Node** n);
// void  after(Node**n);
// void  before(Node**n);
// // deletion of node in ll
// void starttDelete(Node **n);
// void endDelete(Node **n);
// void deleteafter(Node**n);
// void deletebefore(Node**n);
// //searching the ll
// void linearsrch(Node **n);






// void printll(Node *n)
//     {
//         cout<<"Your link list is :\n";
//         int flag=0;
//         while(n!=NULL)
//         { 
//         cout<<n->data<<"\t";
//         n=n->link;
//         flag++;
//         }
//         if(flag==0)
//         cout<<"Oopsss!!!No data in the linked list\n";
//     };

//     void start(Node **n)
//     {
      
// 		Node* temp=new Node(); 
// 		int dat;

//         if((*n)->data!=-1){
        
//          cout<<"Enter the value in link\n";
//          cin>>dat;
//          temp->data=dat;	temp->link=*n;	*n=temp;
//         }
//         else
// 		{
//          cout<<"Enter the value in link\n";
//          cin>>dat;
//          temp->data=dat; 	temp->link=NULL;
//          *n=temp;
//         }
        
//     };
    
//     void end(Node** n)
//     {
//         int dat;
//         Node* temp=new Node();  
//         Node* temp2=new Node();
//         temp2=*n;
//         while(temp2->link!=NULL)
//         { 
//         temp2=temp2->link;
//         }
//         cout<<"Enter the data in the link\n";
//         cin>>dat;
//         temp->data=dat;	
// 		temp->link=NULL;
//         temp2->link=temp;

//     };

//     void  after(Node**n)
//     {
//         int dat;
//         Node*temp2=new Node();
//         temp2=*n;
//         if(temp2->link==NULL){
//         cout<<"Opps!!..Your link is empty\n";
//         return;
//         }
//         else
//         {
//         int y;
//         cout<<"Enter the value after which data you want to ente the new node\n";
//         cin>>y;
//         while(temp2->link!=NULL && temp2->data!=y)
//         {
//            temp2=temp2->link;
//         }
        
//         if(temp2->data!=y)
//         cout<<"Opps!!....Your no. that was ment to be found  doesn't exist in the linked list\n";
//         else
//         {
//         Node *temp=new Node();
//         cout<<"Enter the value in the linked list\n";
//         cin>>dat;
//         temp->data=dat;
//         temp->link=temp2->link;
//         temp2->link=temp;
//         }
//         }
        
//     };

//     void  before(Node**n)
//     {
//         int dat;
//          Node*temp2=new Node();
//         temp2=*n;
      
//          if(temp2->link==NULL){
//         cout<<"Opps!!..Your link is empty\n";
//         return;
//         }
//         else
//         {
//         int z;
//         cout<<"Enter the value before which data you want to enter the new node\n";
//         cin>>z;
        
//         if(temp2->data==z){ 
// 			Node *temp=new Node();
// 	        cout<<"Enter the value in the linked list\n";
// 	        cin>>dat;
// 	        temp->data=dat;
// 	        temp->link=temp2;	*n=temp; return;
// 		}
        
//         while(temp2->link!=NULL && temp2->link->data!=z)
//         {
//            temp2=temp2->link;
//         }
//         if(temp2->link==NULL || temp2->link->data!=z)
//         cout<<"Opps!!....Your no. that was ment to be found  doesn't exist in the linked list\n";
//         else
//         {
//         Node *temp=new Node();
//         cout<<"Enter the value in the linked list\n";
//         cin>>dat;
//         temp->data=dat;
//         temp->link=temp2->link;
//         temp2->link=temp;
//         }

//         }

//     };

// // deletion of node in ll
// void starttDelete(Node **n) 
// {
//     Node *delptr;
//     if((*n)->link == NULL)
//     {
//         cout<<"List is empty";
//     } 
//     else 
//     { 
//         delptr = *n; 
//         *n = (*n)->link;
//         delete(delptr); 
//     } 
// };

// void endDelete(Node **n)
// {

//   Node *delptr=new Node();
//   Node *temp=new Node();
//   temp=*n;
//   if((*n)->link==NULL)
//    cout<<"Opps your link is empty..\n";
//    else
//    {
//        while(temp->link->link!=NULL )
//        {
//            temp=temp->link;
//        }
//        delptr=temp->link;
//        temp->link=NULL;
//        delete(delptr);
//    }
// };

// void deleteafter(Node**n)
// {
    
//     Node *delptr=new Node();
//     Node *temp=new Node();
//     temp=*n;
//     if(temp->link==NULL)
//    cout<<"Opps your link is empty..\n";
//    else
//    {   
//        int item;
//        cout<<"Enter the value after which you want to delete the node in the list\n";
//        cin>>item;
//        while(temp->link!=NULL && temp->link->data!=item )
//        {
//            temp=temp->link;
//        }
//        if(temp->link!=NULL)
//        {
//        delptr=temp;
//        temp->link=NULL;
//        delete(delptr);
//        }
//        else
//        cout<<"Opps!....The item do no exist in the data set";
//    }

// };

// void deletebefore(Node**n)
// {
    
//     Node *delptr=new Node();
//     Node *temp=new Node();
//     if(temp->link==NULL)
//     cout<<"Opps your link is empty..\n";
//    else
//    {   
//        int item;
//        cout<<"Enter the value after which you want to delete the node in the list\n";
//        cin>>item;
//        while(temp->link!=NULL && temp->link->link->data!=item )
//           temp=temp->link;

//        if(temp->link!=NULL)
//        {
//        delptr=temp;
//        temp->link=NULL;
//        delete(delptr);
//        }
//        else
//        cout<<"Opps!....The item do no exist in the data set";
//        }
// };


// //searching the ll
// void linearsrch(Node **n)
// {
//     Node *tmp;  
//     int i=0,flag=0,item;  
//     tmp = *n;   
//     if(tmp->link== NULL)  
//     {  
//         cout<<"\nEmpty List\n";  
//     }  
//     else  
//     {   
//         cout<<"Enter the item to be searched in the list\n";
//         cin>>item;
//         while (tmp!=NULL)  
//         {  
//             if(tmp->data == item)  
//             {  
//             cout<<"Item found at location: "<<(i+1)<<endl;
//             flag++;
//             }   
//          i++;
//         tmp = tmp ->link;  
//         }  
//         if(flag==0) 
//         cout<<"Item not found\n";   
//     } 
// }


 
// int main(int argc, char const *argv[])
// {
//     int x=0;

//     char ch='y';

//     Node* head=new Node();

//     head->link=NULL;
//     head->data=-1;
//     // Node* temp=head;
//     cout<<"Let's create a link list\n";
//     do{
//     cout<<"1.Enter at the start of the linked list\n";
//     cout<<"2.Enter at the end of the linked list\n";
//     cout<<"3.Enter before a element of the list\n";
//     cout<<"4.Enter after the element of the link list\n";
//     cout<<"\t";
//     cin>>x;
//     switch (x)
//     {
//     case 1:start(&head);
//            printll(head);
//            cout<<endl;
//            break;

//     case 2:end(&head);
//            printll(head);
//            cout<<endl;
//            break;

//     case 3:before(&head);
//            printll(head);
//            cout<<endl;
//            break;

//     case 4:after(&head);
//            printll(head);
//            cout<<endl;
//            break;

//     default:cout<<"Invaild option selected\n";
//            cout<<endl;
//             continue;
//     }
//     cout<<"\nDo you want to add  node to the linked list(Y/N)?\n";
//     cin>>ch;
//     }while(ch=='y'|| ch=='Y');

//     cout<<"\nYour linked list after all the operation is:\t\t\n";
//     printll(head);

//     cout<<"\nDo you want to perform various option in the list(Y,y/N,n)?\n";
//     cin>>ch;

//     while(ch=='y'|| ch=='Y')
//     {
//         cout<<"\n1.Search in array\n";
//         cout<<"2.Delete in the beggining of the list\n";
//         cout<<"3.Delete in the end of the list \n";
//         cout<<"4.Deletee after a link in the list\n";
//         cout<<"5.Delete before a link in the list\n";
//         cin>>x;
//         switch(x)
//         {
//            case 1:linearsrch(&head);
//            printll(head);
//            cout<<endl;
//            break;

//            case 2:starttDelete(&head);
//            printll(head);
//            cout<<endl;
//            break;

//            case 3:endDelete(&head);
//            printll(head);
//            cout<<endl;
//            break;

//            case 4:deleteafter(&head);
//            printll(head);
//            cout<<endl;
//            break;

//            case 5:deletebefore(&head);
//            printll(head);
//            cout<<endl;

//            default:cout<<"Invaild option selected\n";
//            cout<<endl;
//            continue;

//         }
//         cout<<"\nDo you want to perform more functions(Y,y/N,n)?\n";
//         cin>>ch;
//     }

//     cout<<"\nYour linked list after all the operation is:\t\t\n";
//     printll(head);

//     cout<<"\nThank you!\n";

//     return 0;
// }















































// // // linklist
// // #include<iostream>
// // using namespace std;

// // class Node
// //     {
// //     public:
// //     int data;
// //     Node * link;
// //     };

// //     // insertation
// // void  start(Node **n);
// // void end(Node** n);
// // void  after(Node**n);
// // void  before(Node**n);
// // //    searching

// // // deletion
// // void start(Node **n);



// //     void printll(Node *n)
// //     {
// //         cout<<"Your link list is :\n";
// //         int flag=0;
// //         while(n!=NULL)
// //         { 
// //         cout<<n->data<<"\t";
// //         n=n->link;
// //         flag++;
// //         }
// //         if(flag==0)
// //         cout<<"Oopsss!!!No data in the linked list\n";
// //     };

// //     void start(Node **n)
// //     {
// //          Node*temp2=new Node();
// //         temp2=*n;
// //         if(temp2->data!=NULL){
// //         int dat;
// //         Node* temp=new Node();
        
// //          temp->link=temp2->link;
// //          cout<<"Enter the value in link\n";
// //          cin>>dat;
// //          temp->data=temp2->data;
// //          temp2->link=temp;
// //          temp2->data=dat;
// //         }
// //         else{
// //          int dat;
// //          cout<<"Enter the value in link\n";
// //          cin>>dat;
// //         temp2->data=dat;
// //         }
        
// //     };
    
// //     void end(Node** n)
// //     {
// //         int dat;
// //         Node*temp=new Node();  
// //         Node*temp2=new Node();
// //         temp2=*n;
// //         temp->link=NULL;
// //         cout<<"Enter the data in the link\n";
// //         cin>>dat;
// //         temp->data=dat;
// //         temp2->link=temp;

// //     };

// //     void  after(Node**n)
// //     {
// //         int dat;
// //          Node*temp2=new Node();
// //         temp2=*n;
// //         if(temp2->link==NULL){
// //         cout<<"Opps!!..Your link is empty\n";
// //         return;
// //         }
// //         else
// //         {
// //         int y;
// //         cout<<"Enter the value after which data you want to ente the new node\n";
// //         cin>>y;
// //         while(temp2->data!=y && temp2->link!=NULL)
// //         {
// //            temp2=temp2->link;
// //         }
// //         if(temp2->link!=NULL)
// //         cout<<"Opps!!....Your no. that was ment to be found  doesn't exist in the linked list\n";
// //         else
// //         {
// //         Node *temp=new Node();
// //         cout<<"Enter the value in the linked list\n";
// //         cin>>dat;
// //         temp->data=dat;
// //         temp->link=temp2->link;
// //         temp2->link=temp;
// //         }
// //         }
        
// //     };

// //     void  before(Node**n)
// //     {
// //         int dat;
// //          Node*temp2=new Node();
// //         temp2=*n;
      
// //          if(temp2->link==NULL){
// //         cout<<"Opps!!..Your link is empty\n";
// //         return;
// //         }
// //         else
// //         {
// //         int z;
// //         cout<<"Enter the value before which data you want to enter the new node\n";
// //         cin>>z;
// //         while(temp2->link->data!=z && temp2->link!=NULL)
// //         {
// //            temp2=temp2->link;
// //          }
// //         if(temp2->link!=NULL)
// //         cout<<"Opps!!....Your no. that was ment to be found  doesn't exist in the linked list\n";
// //         else
// //         {
// //         Node *temp=new Node();
// //         cout<<"Enter the value in the linked list\n";
// //         cin>>dat;
// //         temp->data=dat;
// //         temp->link=temp2->link;
// //         temp2->link=temp;
// //         }

// //         }

// //     };

 
// // int main(int argc, char const *argv[])
// // {
// //     int x,y,z;
// //     char ch='y';
// //     Node* head=new Node();
// //     head->link=NULL;
// //     head->data=NULL;
// //     // Node* temp=head;
// //     cout<<"Let's create a link list\n";
// //     do{
// //     cout<<"1.Enter at the start of the linked list\n";
// //     cout<<"2.Enter at the end of the linked list\n";
// //     cout<<"3.Enter before a element of the list\n";
// //     cout<<"4.Enter after the element of the link list\n";
// //     cout<<"\t";
// //     cin>>x;
// //     switch (x)
// //     {
// //     case 1:start(&head);
// //            printll(head);
// //            cout<<endl;
// //            break;
// //     case 2:end(&head);
// //            printll(head);
// //            cout<<endl;
// //            break;
// //     case 3:before(&head);
// //            printll(head);
// //            cout<<endl;
// //            break;
// //     case 4:after(&head);
// //            printll(head);
// //            cout<<endl;
// //            break;

// //     default:cout<<"Invaild option selected";
// //            cout<<endl;
// //             continue;
// //     }
// //     cout<<"Do you want to add  node to the linked list(Y/N)?\n";
// //     cin>>ch;
// //     }while(ch=='y'|| ch=='Y');
// //     cout<<"Your linked list after all the operation is:\t\t";
// //     printll(head);

// //     return 0;
// // }






// linklist
#include<iostream>
using namespace std;

class Node
    {
    public:
    int data;
    Node * link;
    };

// inserting of node in ll
void  start(Node **n);
void end(Node** n);
void  after(Node**n);
void  before(Node**n);
void sort(Node**n);

// deletion of node in ll
// void starttDelete(Node **n);
// void endDelete(Node **n);
// void deleteafter(Node**n);
// void deletebefore(Node**n);
// //searching the ll
// void linearsrch(Node **n);






void printll(Node *n)
    {
        cout<<"Your link list is :\n";
        int flag=0;
        while(n!=NULL)
        { 
        cout<<n->data<<"\t";
        n=n->link;
        flag++;
        }
        if(flag==0)
        cout<<"Oopsss!!!No data in the linked list\n";
    };

    void start(Node **n)
    {
      
		Node* temp=new Node(); 
		int dat;

        if((*n)->data!=-1){
        
         cout<<"Enter the value in link\n";
         cin>>dat;
         temp->data=dat;	temp->link=*n;	*n=temp;
        }
        else
		{
         cout<<"Enter the value in link\n";
         cin>>dat;
         temp->data=dat; 	temp->link=NULL;
         *n=temp;
        }
        
    };
    
    void end(Node** n)
    {
        int dat;
        Node* temp=new Node();  
        Node* temp2=new Node();
        temp2=*n;
        while(temp2->link!=NULL)
        { 
        temp2=temp2->link;
        }
        cout<<"Enter the data in the link\n";
        cin>>dat;
        temp->data=dat;	
		temp->link=NULL;
        temp2->link=temp;

    };

    void  after(Node**n)
    {
        int dat;
        Node*temp2=new Node();
        temp2=*n;
        if(temp2->link==NULL){
        cout<<"Opps!!..Your link is empty\n";
        return;
        }
        else
        {
        int y;
        cout<<"Enter the value after which data you want to ente the new node\n";
        cin>>y;
        while(temp2->link!=NULL && temp2->data!=y)
        {
           temp2=temp2->link;
        }
        
        if(temp2->data!=y)
        cout<<"Opps!!....Your no. that was ment to be found  doesn't exist in the linked list\n";
        else
        {
        Node *temp=new Node();
        cout<<"Enter the value in the linked list\n";
        cin>>dat;
        temp->data=dat;
        temp->link=temp2->link;
        temp2->link=temp;
        }
        }
        
    };

    void  before(Node**n)
    {
        int dat;
         Node*temp2=new Node();
        temp2=*n;
      
         if(temp2->link==NULL){
        cout<<"Opps!!..Your link is empty\n";
        return;
        }
        else
        {
        int z;
        cout<<"Enter the value before which data you want to enter the new node\n";
        cin>>z;
        
        if(temp2->data==z){ 
			Node *temp=new Node();
	        cout<<"Enter the value in the linked list\n";
	        cin>>dat;
	        temp->data=dat;
	        temp->link=temp2;	*n=temp; return;
		}
        
        while(temp2->link!=NULL && temp2->link->data!=z)
        {
           temp2=temp2->link;
        }
        if(temp2->link==NULL || temp2->link->data!=z)
        cout<<"Opps!!....Your no. that was ment to be found  doesn't exist in the linked list\n";
        else
        {
        Node *temp=new Node();
        cout<<"Enter the value in the linked list\n";
        cin>>dat;
        temp->data=dat;
        temp->link=temp2->link;
        temp2->link=temp;
        }

        }

    };

// // deletion of node in ll
// void starttDelete(Node **n) 
// {
//     Node *delptr;
//     if((*n)->link == NULL)
//     {
//         cout<<"List is empty";
//     } 
//     else 
//     { 
//         delptr = *n; 
//         *n = (*n)->link;
//         delete(delptr); 
//     } 
// };

// void endDelete(Node **n)
// {

//   Node *delptr=new Node();
//   Node *temp=new Node();
//   temp=*n;
//   if((*n)->link==NULL)
//    cout<<"Opps your link is empty..\n";
//    else
//    {
//        while(temp->link->link!=NULL )
//        {
//            temp=temp->link;
//        }
//        delptr=temp->link;
//        temp->link=NULL;
//        delete(delptr);
//    }
// };

// void deleteafter(Node**n)
// {
    
//     Node *delptr=new Node();
//     Node *temp=new Node();
//     temp=*n;
//     if(temp->link==NULL)
//    cout<<"Opps your link is empty..\n";
//    else
//    {   
//        int item;
//        cout<<"Enter the value after which you want to delete the node in the list\n";
//        cin>>item;
//        while(temp->link!=NULL && temp->link->data!=item )
//        {
//            temp=temp->link;
//        }
//        if(temp->link!=NULL)
//        {
//        delptr=temp;
//        temp->link=NULL;
//        delete(delptr);
//        }
//        else
//        cout<<"Opps!....The item do no exist in the data set";
//    }

// };

// void deletebefore(Node**n)
// {
    
//     Node *delptr=new Node();
//     Node *temp=new Node();
//     if(temp->link==NULL)
//     cout<<"Opps your link is empty..\n";
//    else
//    {   
//        int item;
//        cout<<"Enter the value after which you want to delete the node in the list\n";
//        cin>>item;
//        while(temp->link!=NULL && temp->link->link->data!=item )
//           temp=temp->link;

//        if(temp->link!=NULL)
//        {
//        delptr=temp;
//        temp->link=NULL;
//        delete(delptr);
//        }
//        else
//        cout<<"Opps!....The item do no exist in the data set";
//        }
// };


// //searching the ll
// void linearsrch(Node **n)
// {
//     Node *tmp;  
//     int i=0,flag=0,item;  
//     tmp = *n;   
//     if(tmp->link== NULL)  
//     {  
//         cout<<"\nEmpty List\n";  
//     }  
//     else  
//     {   
//         cout<<"Enter the item to be searched in the list\n";
//         cin>>item;
//         while (tmp!=NULL)  
//         {  
//             if(tmp->data == item)  
//             {  
//             cout<<"Item found at location: "<<(i+1)<<endl;
//             flag++;
//             }   
//          i++;
//         tmp = tmp ->link;  
//         }  
//         if(flag==0) 
//         cout<<"Item not found\n";   
//     } 
// }


void reverse(Node**n)
{

Node * temp=new Node();
temp=*n;
Node * next=NULL,*prv=NULL;
if(temp==NULL){
    cout<<"The link list is empty";
    return;
}
else{


while(temp!=NULL){
next=temp->link;
temp->link=prv;
prv=temp;
temp=next;


}
*n=prv;
}
};


 void sort(Node**n)
 {
     Node *temp=*n;
     int temp2,count=0;
     int size=sizeof(temp);
     while(temp!=NULL){
         count++;
         temp=temp->link;
     }
     for(int i=0;i<count;i++){
     while(temp->link!=NULL){
         if(temp->data >temp->link->data)
         {
             temp=temp->link;
         }
         else
         swap(temp->data,temp->link->data);
             temp=temp->link;
            
     }
     }

 };
int main(int argc, char const *argv[])
{
    int x=0;

    char ch='y';

    Node* head=new Node();

    head->link=NULL;
    head->data=-1;
    // Node* temp=head;
    cout<<"Let's create a link list\n";
    do{
    cout<<"1.Enter at the start of the linked list\n";
    cout<<"2.Enter at the end of the linked list\n";
    cout<<"3.Enter before a element of the list\n";
    cout<<"4.Enter after the element of the link list\n";
    cout<<"\t";
    cin>>x;
    switch (x)
    {
    case 1:start(&head);
           printll(head);
           cout<<endl;
           break;

    case 2:end(&head);
           printll(head);
           cout<<endl;
           break;

    case 3:before(&head);
           printll(head);
           cout<<endl;
           break;

    case 4:after(&head);
           printll(head);
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
    printll(head);

    // cout<<"\nDo you want to perform various option in the list(Y,y/N,n)?\n";
    // cin>>ch;

    // while(ch=='y'|| ch=='Y')
    // {
    //     cout<<"\n1.Search in array\n";
    //     cout<<"2.Delete in the beggining of the list\n";
    //     cout<<"3.Delete in the end of the list \n";
    //     cout<<"4.Deletee after a link in the list\n";
    //     cout<<"5.Delete before a link in the list\n";
    //     cin>>x;
    //     switch(x)
    //     {
    //        case 1:linearsrch(&head);
    //        printll(head);
    //        cout<<endl;
    //        break;

    //        case 2:starttDelete(&head);
    //        printll(head);
    //        cout<<endl;
    //        break;

    //        case 3:endDelete(&head);
    //        printll(head);
    //        cout<<endl;
    //        break;

    //        case 4:deleteafter(&head);
    //        printll(head);
    //        cout<<endl;
    //        break;

    //        case 5:deletebefore(&head);
    //        printll(head);
    //        cout<<endl;

    //        default:cout<<"Invaild option selected\n";
    //        cout<<endl;
    //        continue;

    //     }
    //     cout<<"\nDo you want to perform more functions(Y,y/N,n)?\n";
    //     cin>>ch;
    // }

    cout<<"\nYour linked list after all the operation is:\t\t\n";
    printll(head);

    cout<<"\nThank you!\n";

    return 0;
}

