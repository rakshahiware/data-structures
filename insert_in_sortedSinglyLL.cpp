#include<iostream>
using namespace std;
#include"class_node.cpp"
void build(Node* &head,int data){          //taking head by refference as we need to change the head
    Node* n = new Node(data);                     //allocating memory to new node dynamically in heap and calling constructor
    n->next=NULL;  
    if(head==NULL){                           //
        head = n;
        return; 
    } 
    Node* temp=head;      
    while(temp->next!=NULL)              // iterator to traverse to the last node of Linked List 
        temp = temp->next;               
   
    temp->next = n ;             // assign last node's next to this n we dont need to add null after n as there is already null in next of n

}


void insertSorted(Node* &head,int x, int data)
{
    Node* temp=head;
    Node* n = new Node(data);  
    
   if(head==NULL){
         n->next=head;
         head=n;
       }
       temp = temp->next; 
    
    if(data<temp->data){
        n->next= temp->next;
        // assign nth node's next to this new node
        temp->next = n;
    }
}

void display(Node* head){
    Node* temp=head;   //
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL; //list is empty;
    build(head,1);
    build(head,2);
    build(head,3);
    build(head,4);
    build(head,6);
    build(head,7);
    cout<<"Linked list: ";
    display(head);
    int x;
    cout<<"\nEnter the position on which element to be inserted: \n";
    cin>>x;
    int data;
    cout<<"\nEnter the element to be inserted: \n";
    cin>>data;
    insertSorted(head,x,data);
    cout<<"After insertion: ";
    display(head);
    return 0;

}