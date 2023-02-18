#include<iostream>
using namespace std;
#include"class_node.cpp"
void insert_node(Node* &head,int data){          //taking head by refference as we need to change the head
    Node* n=new Node(data);                     //allocating memory to new node dynamically in heap and calling constructor
    n->next=head;          //next of n now points towrds first node
    head=n; //n becomes first node move head to n

}
void display(Node* head){
    Node* temp=head;   //
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void delete_node(Node* &head,int delVal){
    Node* temp=head;
    Node* previous;
    if(temp==NULL){
        cout<<"Value can not be deleted because the linked list is empty"<<endl;
    }
    if(temp->next==NULL){                   // Case when there is only 1 node in the list 
        head = NULL;
        free(temp);
        cout << "Deleted: " << delVal << endl; 
        return; 
    }
    if(temp->data==delVal){                   // if the head node itself needs to be deleted   
       head = temp->next; //changing head to next in the list
        cout << "Deleted: " << temp->data << endl; 
        free(temp); 
        return; 
    } 
                                                  
    while (temp != NULL && temp->data != delVal)  // traverse until we find the value to be deleted or LL ends 
    { 
        // store previous link node as we need to change its next val
        previous = temp; 
        temp = temp->next; 
    }
    // if value is not present then
    // temp will have traversed to last node NULL
    if(temp==NULL)
    {
        cout << "Value not found" << endl; 
        return; 
    } 

    // for node to be deleted : temp lets call it nth node 
    // assign (n-1)th node's next to (n+1)th node 
    previous->next = temp->next;
    free(temp);
    cout << "Deleted: " << delVal << endl;
}

int main(){
    Node* head=NULL; //list is empty;
    insert_node(head,5);
    insert_node(head,4);
    insert_node(head,3);
    insert_node(head,2);
    insert_node(head,1);
    display(head);
    delete_node(head,4);
    display(head);
    delete_node(head,10);
    delete_node(head,1);
    delete_node(head,5);
    
    display(head);
    return 0;

}