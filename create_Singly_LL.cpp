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
}
int main(){
    Node* head=NULL; //list is empty;
    insert_node(head,5);
    insert_node(head,4);
    insert_node(head,3);
    insert_node(head,2);
    insert_node(head,1);
    display(head);
    return 0;

}