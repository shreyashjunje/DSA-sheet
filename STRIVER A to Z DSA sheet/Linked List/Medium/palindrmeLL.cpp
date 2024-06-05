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

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
bool palindromeLL(Node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }

    Node* forward=slow->next;
    Node* reversekaHead=reverse(forward);
    slow->next=reversekaHead;

    Node* temp=head;

    while(reversekaHead!=NULL){
        if(temp->data!=reversekaHead->data){
            return false;
        }
        reversekaHead=reversekaHead->next;
        temp=temp->next;
    }

    return true;
}


int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(30);
    Node* fifth=new Node(20);
    Node* sixth=new Node(20);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    print(first);
    cout<<endl;

    cout<<palindromeLL(first);
   

}