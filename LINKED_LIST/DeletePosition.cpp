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

Node* deletePos(Node* Head,int pos){
    Node* temp=Head;
    Node* prev=NULL;
    if(Head==NULL) return NULL;
    
    if(pos==1){
        Head=Head->next;
        delete temp;
        return Head;
    }

    pos--;

    while(pos--){
        prev=temp;
        temp=temp->next;

    }
    prev->next=temp->next;
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

    int pos;
    cout<<"Enter pos : ";
    cin>>pos;
    Head=deletePos(Head,pos);

    temp=Head;
    // display 
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
    
    return 0;
}