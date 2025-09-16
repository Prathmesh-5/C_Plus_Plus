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

Node* deleteNode(Node* Head,int pos){
    Node* curr=Head;
    if(Head==NULL) return NULL;
    if(pos==1){
        Node* temp=curr->next;
        delete curr;
        return temp;

    }

    curr->next=deleteNode(curr->next,pos-1);

    return curr;
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
    temp=Head;

    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    Head=deleteNode(Head,pos);

    temp=Head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

    return 0;
}