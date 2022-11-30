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
// sorting the link list
void mysort(Node *&head,Node *p1,Node *p2);
Node *mergeSortedLists(Node *head1, Node *head2);
// removing duplicate node 
void removeDuplicates(Node*** head);
// reversing the link list
void reverse();






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


void mysort(Node *&head,Node *p1,Node *p2)
{
    if(p2==NULL)
    {
        return;
    }

   Node *p3=p1->link;
    // here we are setting the p3 node as the next link of the ll
   while(p3!=NULL)
    {
        if(p1->data>p3->data)
        {
            swap(p1->data,p3->data);
            // if the previous link is greater then next link then swap the values using the swap function
        }
        p3=p3->link;
        // moving to the next two link and passing it back to the function in a pair of 2 links at a time 
    }
    mysort(head,p2,p2->link);
    // recrussion till the whole link list is sorted  
}


    //now lets merge these 2 arrays
    Node *mergeSortedLists(Node *head1, Node *head2)
    {
    Node *result = NULL;
    // taking a extra node to store the value of the two combined list
      if (head1 == NULL)
       {
          return head2;
        //   if the first list is empty then only one link list is formed as merged and vice versa 
           }
     if (head2 == NULL) 
       {
      return head1;
           }
     if (head1->data < head2->data) 
        {
            // if the first list data is smaller then the data in the second list then result is equal to the first list and then we passs
            // it back to mergersort function till any value of 2nd list is lessser then the first list 
          result = head1;
          result->link = mergeSortedLists(head1->link, head2);
        }
     else
        {
            // if second list data is lesser then list first the revrse step is taken and vice versa of the above statement 
        result = head2;
        result->link = mergeSortedLists(head1, head2->link);
      } 

   return result;
//    when the following conditon is satified the link is passed back to the fist call of merger sort funtion 
  }


  /* The function removes duplicates from a sorted list */
void removeDuplicates(Node** n)
{
    /* Pointer to traverse the linked list */
    Node* current =new Node();
    current= *n;
 
    /* Pointer to store the next pointer of a node to be deleted*/
    Node* next_next;
     
    /* do nothing if the list is empty */
    if (current == NULL)
    return;
 
    /* Traverse the list till last node */
    while (current->link != NULL)
    {
    /* Compare current node with next node */
    if (current->data == current->link->data)
    {
        /* The sequence of steps is important*/       
        next_next = current->link->link;
        free(current->link);
        current->link = next_next;
    }
    else 
    // only advance if no deletion 
    {
        current = current->link;
    }
    }
}

void reverse(Node**n)
    {
        // Initialize current, previous and
        // next pointers
       
        Node* current = *n;
        Node *prev = NULL,*next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->link;
 
            // Reverse current node's pointer
            current->link = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }

      *n = prev;
    }
 
int main(int argc, char const *argv[])
{
    int x=0;

    char ch='y';

    Node* head=new Node();
    Node* head2=new Node();
    Node* result=new Node();

    head2->link=NULL;
    head2->data=-1;

    head->link=NULL;
    head->data=-1;
    // Node* temp=head;
    cout<<"Let's create the first link list\n";
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
    cout<<"Now lets sort this link list \n ";
    
    mysort(head,head,head->link);

    cout<<"After sorting operations\n";
    printll(head);
    cout<<endl;

    // now the second link list
    
    cout<<"Let's create the second link list\n";
    do{
    cout<<"1.Enter at the start of the linked list\n";
    cout<<"2.Enter at the end of the linked list\n";
    cout<<"3.Enter before a element of the list\n";
    cout<<"4.Enter after the element of the link list\n";
    cout<<"\t";
    cin>>x;
    switch (x)
    {
    case 1:start(&head2);
           printll(head2);
           cout<<endl;
           break;

    case 2:end(&head2);
           printll(head2);
           cout<<endl;
           break;

    case 3:before(&head2);
           printll(head2);
           cout<<endl;
           break;

    case 4:after(&head2);
           printll(head2);
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

    printll(head2);
    cout<<endl;


      cout<<"Now lets sort this link list\n";

    mysort(head2,head2,head2->link);
    cout<<endl;


    cout<<"After sorting operations\n";
    printll(head2);
    cout<<endl;
    
    cout<<"Now lets merge and sort these link lists\n";



    // now mergeing and sorting the array 
    
    result = mergeSortedLists(head, head2);
    cout<<endl;
    // now deleting the duplicate elemets from the merged array 
    removeDuplicates(&result);

    cout<<"\nYour linked list after all the operation is:\t\t\n";

    printll(result);
    cout<<endl;

    cout<<"Now lets reverse the link list\n";

    cout<<endl;
    reverse(&result);

    printll(result);
    cout<<endl;


    cout<<"\nThank you!\n";

    return 0;
}