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

void remove(Node* &head, int& k){
   

    if(head==NULL){
        return;
    }

    remove(head->next,k);

    if(k==0){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    k--;

}

Node* removeNthNodeFromEnd(Node* &head, int k){
    if(head==NULL){
        return head;
    }

    remove(head,k);

    return head;
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

    Node* temp=removeNthNodeFromEnd(first,1);

    print(temp);

   

}