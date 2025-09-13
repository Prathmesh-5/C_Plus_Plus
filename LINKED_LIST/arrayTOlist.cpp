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
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int>vec(n);

    Node* Head;
    Node* temp;
    Head=NULL;
    temp=Head;

    for(int i=0;i<vec.size();i++){
        cin>>vec[i];

        if(i==0){
            temp=new Node(vec[i]);
            Head=temp;
        }

        else{
            temp->next=new Node(vec[i]);
            temp=temp->next;
        }

    }
    temp=Head;

    // display :

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;

    return 0;
}