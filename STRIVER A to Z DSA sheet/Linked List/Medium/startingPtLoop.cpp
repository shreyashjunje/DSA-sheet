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

Node* startingPtLoop(Node* head){
    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

            if(slow==fast){
                
                break;
            }
    }
    slow=head;

    while(fast!=slow){
        fast=fast->next;
        slow=slow->next;

    }

    return slow;
}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    Node* seventh=new Node(70);
    Node* eighth=new Node(80);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=fifth;

    Node* temp=startingPtLoop(first);
    cout<<temp->data;
}