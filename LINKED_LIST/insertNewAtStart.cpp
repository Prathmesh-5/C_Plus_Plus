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


int main(){

    // creating 1 -> 2 -> 3
    Node* Head=NULL;
    Node* temp=Head;

    temp=new Node(1);
    Head=temp;

    temp->next=new Node(2);
    temp=temp->next;

    temp->next=new Node(3);
    temp=temp->next;


    //display 

    temp=Head;
    while(temp!=NULL){

        cout << temp->data << " -> ";
        temp=temp->next;
    }

        cout << "NULL" << endl;

        temp=Head;

    temp=new Node(4);
    temp->next=Head;
    Head=temp;

    // display after insertion
    temp=Head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;



    return 0;
}