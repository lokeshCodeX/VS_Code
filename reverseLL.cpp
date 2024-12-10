#include<iostream>
#include<vector>
using namespace std;

class Node{

public:
int data;
Node* next ;
Node(int data){
    this->data=data;
    this->next=NULL;
}

};


void insertNode(Node* &head, int data){
    if(head==NULL){
        head=new Node(data);
        return ;
    }

    Node*curr=head;
    while(curr->next !=NULL){
        curr=curr->next;
    }
    curr->next=new Node(data);
}

void printLL(Node* head){

if(head==NULL){
    cout<<"linked list is empty"<<endl;

    return ;
}
Node* curr= head;
while(curr != NULL){
    cout<<curr->data<<" ";
    curr=curr->next;

}

}


Node* reverseLL(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* prev=NULL;
    Node* curr=head;
    Node* ptr=head;
    while(curr!=NULL){
        ptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ptr;
    }
    return prev;
}



int main(){
    Node* head=NULL;
cout<<"enter the data for the node to create the linked list"<<endl;

    int data;
    cin>>data;
    while(data != -1){
          insertNode(head,data);
          cin>>data;
    }


cout<<endl<<"print the linked list "<<endl;

printLL(head);

cout<<endl<<"linked list after the revwerse"<<endl;
head=reverseLL(head);
printLL(head);




    return 0;
}