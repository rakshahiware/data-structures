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
int calcLen(Node* head){
    
    int len = 0;

    while(head != NULL){
        head = head->next;
        len++;
    }
    return len;
}

void insertAtNthNode(Node* &head,int data,int n){
    Node* newNode = new Node(data);
    Node* temp = head;
    int len = calcLen(temp);
    
    if(n < 1 || n > len){
        cout <<"Not Valid position to insert"<< endl; 
        return; 
    } 
    
    // traverse to the n'th node 
    for(int i = 0; temp != NULL && i < n- 1; i++) { 
       temp = temp->next; 
    }
    // assign newNode's next to nth node's next
        newNode->next= temp->next;
        // assign nth node's next to this new node
        temp->next = newNode;
}

int main(){
    Node* head=NULL; //list is empty;
    insert_node(head,25);
    insert_node(head,24);
    insert_node(head,22);
    insert_node(head,20);
    cout<<"Before : ";
    display(head);
 
    insertAtNthNode(head,21,1);
    insertAtNthNode(head,23,3);
    insertAtNthNode(head,26,6);
     cout<<"After : ";
    display(head);
    return 0;
}