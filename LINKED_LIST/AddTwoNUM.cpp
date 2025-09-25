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

Node* createList(Node* Head){
    Node* temp=Head;
    char ch='y';
    
    while(ch=='y'){
        int value;
        cout<<"Enter node's value : ";
        cin>>value;

        if(Head==NULL){
            Head=new Node(value);
            temp=Head;
        }
        else{
            temp->next=new Node(value);
            temp=temp->next;
        }

        cout<<"Do you want to add more ?? (y/n) : ";
        cin>>ch;

    }
    return Head;

}



int main(){
    // creation of list1 ---->>>
    cout<<"**** input of list2 ****\n"<<endl;
    Node* Head1=NULL;
    Node* temp1=Head1;


    Node* ans1=createList(Head1);
    Head1=ans1;
    temp1=Head1;

    while(temp1!=NULL){
        cout<<temp1->data<<" -> ";
        temp1=temp1->next;
    }
    cout<<"NULL"<<endl;
    temp1=Head1;

    // creation of 2nd list ---->>
    cout<<"\n\n**** input of list2 ****\n"<<endl;
    Node* Head2=NULL;
    Node* temp2=Head2;

    Node* ans2=createList(Head2);
    Head2=ans2;
    temp2=Head2;

    while(temp2!=NULL){
        cout<<temp2->data<<" -> ";
        temp2=temp2->next;
    }
    cout<<"NULL"<<endl;
    temp2=Head2;
    int sum1=0,sum2=0,sum;
    while(temp1!=NULL){
        sum1=(sum1*10)+temp1->data;
        temp1=temp1->next;

    }
    while(temp2!=NULL){
        sum2=(sum2*10)+temp2->data;
        temp2=temp2->next;

    }
    sum=sum1+sum2;
    cout<<"SUM IS : "<<sum<<endl;
    Node* Head_new=NULL;
    Node* temp_new=Head_new;


    while(sum!=0){

        if(Head_new==NULL){
            Head_new=new Node(sum%10);
            temp_new=Head_new;
        }
        else{
            temp_new->next=new Node(sum%10);
            temp_new=temp_new->next;
        }
        sum=sum/10;

    }
    temp_new=Head_new;

     while(temp_new!=NULL){
        cout<<temp_new->data<<" -> ";
        temp_new=temp_new->next;
    }
    cout<<"NULL"<<endl;
    
    return 0;


}