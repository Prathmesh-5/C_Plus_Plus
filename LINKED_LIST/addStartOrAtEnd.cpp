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

Node* insertStart(int num,Node* Head){
    Node* newNode=new Node(num);;

    if(Head==NULL) return newNode;

    newNode->next=Head;
    
    return newNode;


}

Node* insertEnd(int num,Node* Head){
    Node* newNode=new Node(num);

    Node* temp=Head;

    if(temp==NULL) return newNode;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return Head;

}


int main(){
    Node* Head;
    Head=NULL;
    Node* temp=Head;
    char ch;
    int num;
    cout<<"**** For inserting at starting enter (s) ; For inserting at end enter (e) ; For display enter (d) ;For exit enter (x) ****"<<endl;
    while(true){
        cout<<"ENTER YOUR CHOICE : ";
        cin>>ch;
        if(ch=='s'){
            cout<<"Enter value to insert at start : ";
            cin>>num;
            Head=insertStart(num,Head);
            temp=Head;

        }
        else if(ch=='e'){
            cout<<"Enter value to insert at end : ";
            cin>>num;
            Head=insertEnd(num,Head);
            temp=Head;

        }
        else if(ch=='d'){

            while(temp!=NULL){
                cout<<temp->data<<" -> ";
                temp=temp->next;
            }
            temp=Head;
            cout<<"NULL"<<endl;
            
            
        }
        else{
            cout<<"   ------   e   x   i   s   t   i   n   g   ------    "<<endl;
            break;
        }


    }


    return 0;
}