#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;

    Node(int value){
        data=value;
        next=NULL;
    }
};

Node* deleteFirst(Node* Head){
    
    if(Head==NULL) return Head;

    Node* temp=Head;
    Head=Head->next;
    delete temp;
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

    Head=deleteFirst(Head);
    temp=Head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

    return 0;
}