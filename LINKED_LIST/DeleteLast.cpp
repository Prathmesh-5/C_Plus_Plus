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

Node* deleteLast(Node* Head){
    Node* temp=Head;
    Node* prev=NULL;
    if(Head==NULL) return Head;
    if(Head->next==NULL){
        Head=NULL;
        delete temp;

        return Head;
    }
    

    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
    return Head;
}


int main(){
    Node* Head=NULL;
    Node* temp=Head;
    int n;
    cout<<"Enter size : ";
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

    
    Head=deleteLast(Head);
    temp=Head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;


    return 0;
}