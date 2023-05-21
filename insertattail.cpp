//singly linked list insertion
//insert at tail
#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node* next;
    
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
//by reference
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}
 
int main() {
    //created a new node
    Node* node1=new Node(10);
    //head pointed to node1
    Node* head=node1;
    Node* tail = node1;
    //print the list before insertion
    print(head);
    
    InsertAtTail(tail,12);
    print(head);
    
      InsertAtTail(tail ,15);
    print(head);
    return 0;
}
