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

Node* sort(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* dummyzero=new Node(-1);
    Node* dummyone=new Node(-1);
    Node* dummytwo=new Node(-1);

    Node* zero=dummyzero;
    Node* one=dummyone;
    Node* two=dummytwo;

    Node* temp=head;

    while(temp!=NULL){
        if(temp->data==0){
           zero->next=temp;
           zero=zero->next;

        }else if( temp->data==1){
           one->next=temp;
           one=one->next;

        }else{
           two->next=temp;
           two=two->next;

        }
        temp=temp->next;
    }

   // Link the end of the 0s list to the start of the 1s list or 2s list
    zero->next = dummyone->next!=NULL ? dummyone->next : dummytwo->next;

    one->next=dummytwo->next;

    two->next=NULL;

    head=dummyzero->next;

    // Free the dummy nodes
    delete dummyzero;
    delete dummyone;
    delete dummytwo;

    return head;
}




int main(){
    Node* first=new Node(0);
    Node* second=new Node(1);
    Node* third=new Node(2);
    Node* fourth=new Node(0);
    Node* fifth=new Node(2);
    Node* sixth=new Node(1);
    Node* seventh=new Node(0);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;

    print(first);

    cout<<endl;

    Node* head=sort(first);

    print(head);



   
}