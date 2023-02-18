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

void deleteNthNode(int n, Node* &head){
    Node* temp = head;
    Node* prev;
    
    int len = calcLen(temp);
    
    if(n < 1 || n > len){
        cout << "Invalid" << endl; 
        return; 
    } 

    // delete the 1st node 
    if(n == 1){ 
        head = temp->next;
        cout << temp->data << " deleted" << endl; 
        free(temp); 
        return; 
    } 

    // traverse to the n'th node 
    for(int i = 0; temp != NULL && i < n- 1; i++) { 
        prev = temp; 
        temp = temp->next; 
    }

    // change prevNode node's next node to nth node's next node
    prev->next = temp->next;

    // delete this nth node
    cout << temp->data << " deleted" << endl;;
    free(temp);
}

int main(){
    Node* head=NULL; //list is empty;
    insert_node(head,25);
    insert_node(head,24);
    insert_node(head,23);
    insert_node(head,22);
    insert_node(head,21);
    insert_node(head,20);
    cout<<"Before : ";
    display(head);
 
    deleteNthNode(2,head);
    deleteNthNode(4,head);
     cout<<"After : ";
    display(head);
    return 0;
}