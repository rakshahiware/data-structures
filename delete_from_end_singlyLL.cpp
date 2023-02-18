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
void delete_from_end(Node* &head){
     Node* temp=head;
     Node* prev;
    if(temp==NULL){
       cout<<"Linked list is empty"<<endl;
       return;
    }
    if(temp->next==NULL){                   // Case when there is only 1 node in the list 
        head = NULL;
        free(temp);
        cout << "Deleted: " <<head->data<< endl; 
        return; 
    }
    while (temp->next != NULL) 
    {
        // store previous link node as we need to change its next val
        prev= temp; 
        temp = temp->next; 
    }
    
    // Curr assign 2nd last node's next to Null
    prev->next = NULL;
    
    cout << "\nValue Deleted: " << temp->data;
    // delete the last node
    free(temp);
    // 2nd last now becomes the last node
}

int main(){
    Node* head=NULL; //list is empty;
    insert_node(head,5);
    insert_node(head,4);
    insert_node(head,3);
    insert_node(head,2);
    insert_node(head,1);
    cout<<"Before deletion"<<endl;
    display(head);
    delete_from_end(head);
    delete_from_end(head);
    delete_from_end(head);
    cout<<"\nAfter deletion"<<endl;
    display(head);
}