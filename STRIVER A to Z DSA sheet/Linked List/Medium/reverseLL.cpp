#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int length(Node* head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;

}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

bool search(Node* head , int element){
    Node* temp=head;
    

    while(temp!=NULL){

        if(temp->data==element){
            return true;
        }
        temp=temp->next;
    }

    return false;
}

Node* reverse(Node* &head){

    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }

    return prev;


}

Node* reverseLL(Node*& head, Node*& prev, Node*& curr){
    if(curr==NULL){
        return prev;
    }

    Node* forward=curr->next;
    curr->next=prev;

    return reverseLL(head,curr,forward);
}

void recursiveReverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;


    Node* temp=reverseLL(head,prev,curr);

    print(temp);


}


int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    print(first);
    cout<<endl;

    // Node* head=reverse(first);

    // print(head);
    // cout<<endl;

    recursiveReverse(first);

}