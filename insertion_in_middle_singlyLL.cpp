#include<iostream>
using namespace std;
#include"class_node.cpp"
int getCurrSize(Node* node){
    int size=0;

    while(node!=NULL){
        node = node->next;
        size++;
    }
    return size;
}

void insert_at_front(Node* &head,int data){          //taking head by refference as we need to change the head
    Node* n = new Node(data);                     //allocating memory to new node dynamically in heap and calling constructor
    n->next=head;   //make the nextnode of n as current head                         
    head = n;
    return;    
            // assign last node's next to this n we dont need to add null after n as there is already null in next of n
    cout << n->data << " inserted" << endl;
  
}
void insert_at_middle(Node* &head,int data){
    Node* n = new Node(data);  
    if(head==NULL){
          n->data=data;
          n->next=head;
          head=n;
          return;
    }
    Node* temp=head;
    int size=getCurrSize(head);
    //else find a correct middle position to insert
    int mid=(size%2 ==0)? size/2 : (size+1)/2;
    //trensverse to the current mid position
     while(--mid){
        temp = temp->next;
     }
    
    n->next = temp->next;
    temp->next = n;
    size++;
    


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
    insert_at_front(head,6);
    insert_at_front(head,5);
    insert_at_front(head,3);
    insert_at_front(head,2);
    insert_at_front(head,1);
    cout<<"Before\n";
    display(head);
    insert_at_middle(head,4);
    cout<<"\nAfter\n";
    display(head);
    return 0;
}



