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

    Node* zero=new Node(-1);
    Node* one=new Node(-1);
    Node* two=new Node(-1);

    Node* temp1=zero;
    Node* temp2=one;
    Node* temp3=one;

    Node* temp=head;

    while(temp!=NULL){
        if(temp->data==0){
            zero->next=temp;
            temp=temp->next;
            temp->next=NULL;
            zero=zero->next;

        }else if( temp->data==1){
            one->next=temp;
            temp=temp->next;
            temp->next=NULL;
            one=one->next;

        }else{
            two->next=temp;
            temp=temp->next;
            temp->next=NULL;
            two=two->next;

        }
    }

    temp1=temp1->next;
    temp2=temp2->next;
    temp3=temp3->next;

    one->next=temp2;


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



   
}