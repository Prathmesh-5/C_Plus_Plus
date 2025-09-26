#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

Node* Compare(Node* l1,Node* l2){
    Node* t1=l1; Node* t2=l2;
    while(t1  && t2){
        t1=t1->next;
        t2=t2->next;
    }
    if(t1) return l1;
    return l2;
}

Node* addTwoNumbers(Node* Head1,Node* Head2){
    Node* temp1=Head1; Node* temp2=Head2;
    Node* Head3=Compare(Head1,Head2);
    Node* temp3=Head3; Node* prev=NULL;

    int sum,carry=0;

    while(temp1 || temp2){
        sum=0;
        if(temp1){
            sum+=temp1->data;
            temp1=temp1->next;
        }
        if(temp2){
            sum+=temp2->data;
            temp2=temp2->next;
        }
        sum=sum+carry;
        temp3->data=sum%10;
        prev=temp3;
        temp3=temp3->next;

        carry=sum/10;
    }
    if(carry!=0){
        prev->next=new Node(carry);
        prev=prev->next;
    }

    return Head3;

}

Node* createList(){
    Node* Head=NULL;
    Node* temp=Head;

    char ch='y';
    while(ch=='y'){
        int value;
            cout<<"Enter Node's value : ";
            cin>>value;
        if(Head==NULL){
            
            Head=new Node(value);
            temp=Head;
        }
        else{
            temp->next=new Node(value);
            temp=temp->next;
        }

        cout<<"Do you want to add  more value ? (y/n) : ";
        cin>>ch;

    }
    return Head;

}

int main(){
    Node* Head1=NULL; Node* temp1=Head1;
    Node* Head2=NULL; Node* temp2=Head1;

    Node* ans1=createList();
    Head1=ans1;
    temp1=Head1;
    

    while(temp1){
        cout<<temp1->data<<" -> ";
        temp1=temp1->next;
    }

    cout<<"NULL\n";
    temp1=Head1;


    Node* ans2=createList();
    Head2=ans2;
    temp2=Head2;
    

    while(temp2){
        cout<<temp2->data<<" -> ";
        temp2=temp2->next;
    }

    cout<<"NULL\n";
    temp2=Head2;

    Node* ans=addTwoNumbers(Head1,Head2);

    Node* TEMP=ans;
     while(TEMP){
        cout<<TEMP->data<<" -> ";
        TEMP=TEMP->next;
    }

    cout<<"NULL\n";
    TEMP=ans;

return 0;
}