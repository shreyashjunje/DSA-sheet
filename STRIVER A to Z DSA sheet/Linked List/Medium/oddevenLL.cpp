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

Node* oddevenLL(Node* head){
    if(head==NULL || head->next==NULL || head->next->next==NULL){
        return head;
    }

    Node* odd=head;
    Node* even=head->next;
    Node* even_start=head->next;

    while(odd->next&&even->next){
        odd->next=even->next;
        even->next=odd->next->next;
        odd=odd->next;
        even=even->next;

    }

    odd->next=even_start;

    return head;
}



int main(){
    Node* first=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* fourth=new Node(4);
    Node* fifth=new Node(5);
    Node* sixth=new Node(6);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    Node* temp=oddevenLL(first);


    print(temp);

    

}