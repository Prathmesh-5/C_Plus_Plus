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
    int size;
    cout<<"Enter the size :";
    cin>>size;

    vector<int>vec(size);

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

    int count=1;
    while(temp!=NULL){
        if(k==1){
            Head=NULL;
            break;   
        }

        if(count==k-1 && temp->next!=NULL){
            temp->next = temp->next->next;
            count=0; 
        }

        temp = temp->next;
        count++;
    }

    temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

    return 0;
}
