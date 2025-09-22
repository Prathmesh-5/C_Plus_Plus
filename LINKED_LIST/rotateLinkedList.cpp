#include<iostream>
#include<vector>
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
    Node* Head=NULL;
    Node* temp=Head;

    int n;
    cout<<"Enter size :";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<vec.size();i++){
        cin>>vec[i];

        if(Head==NULL){
            Head=new Node(vec[i]);
            temp=Head;
        }
        else{
            temp->next=new Node(vec[i]);
            temp=temp->next;
        }
    }

    temp=Head;

    int k;
    cout<<"Enter k : ";
    cin>>k;
    
    int pos=n-k;

    Node* prev=NULL;
    Node* future=Head;


    while(pos--){
        prev=future;
        future=future->next;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=Head;
    Head=future;
    prev->next=NULL;

    // display :

    temp=Head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;


    return 0;
}