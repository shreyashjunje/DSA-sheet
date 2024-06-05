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


void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* delteMiddleNode(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    Node* slow=head;
    Node* fast=head->next;

    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

    }

    Node* temp=slow->next;
    slow->next=temp->next;
    temp->next=NULL;
    delete temp;

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

    print(first);

    Node* temp=delteMiddleNode(first);
    cout<<endl;

    print(temp);
   

}