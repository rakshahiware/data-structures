#include<iostream>
using namespace std;
#include"class_node.cpp"
void insert_at_front(Node* &head,int data){          //taking head by refference as we need to change the head
    Node* n = new Node(data);                     //allocating memory to new node dynamically in heap and calling constructor
    n->next=head;   //make the nextnode of n as current head                         
    head = n;
        
            // assign last node's next to this n we dont need to add null after n as there is already null in next of n
    cout << n->data << " inserted" << endl;
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
    insert_at_front(head,1);
    insert_at_front(head,2);
    insert_at_front(head,3);
    insert_at_front(head,4);
    insert_at_front(head,5);
    insert_at_front(head,6);
    display(head);
    return 0;

}