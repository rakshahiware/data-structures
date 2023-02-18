#include<iostream>
using namespace std;
#include"class_node.cpp"
void insert_at_end(Node* &head,int data){          //taking head by refference as we need to change the head
    Node* n = new Node(data);                     //allocating memory to new node dynamically in heap and calling constructor
    n->next=NULL;  
    if(head==NULL){                           //is the list is empty
        head = n;
      
        return; 
    } 
    Node* temp=head;      
    while(temp->next!=NULL)              // iterator to traverse to the last node of Linked List 
        temp = temp->next;               
   
    temp->next = n ;             // assign last node's next to this n we dont need to add null after n as there is already null in next of n

}
void search(Node* &head,int x){
    Node* temp=head;
    int count=1;
    if(head==NULL){
        cout<<"List is empty\n";
    }
    while(head->next!=NULL){
        if(temp->data==x){
            cout<<"Item is found at location "<<count<<endl;
        }
        temp=temp->next;
        count++;
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
    insert_at_end(head,1);
    insert_at_end(head,2);
    insert_at_end(head,3);
    insert_at_end(head,4);
    insert_at_end(head,5);
    cout<<"Linked list: ";
    display(head);
    int x;
    cout<<"\nEnter the element to be searched\n";
    cin>>x;
    search(head,x);
    return 0;

}