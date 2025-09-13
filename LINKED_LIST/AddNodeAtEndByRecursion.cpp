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

Node* insertEnd(vector<int> vec, int index){
    if(index==vec.size()) return NULL;

    Node* newNode=new Node(vec[index]);

    newNode->next=insertEnd(vec,index+1);

    return newNode;


}


int main(){
    Node* Head=NULL;
    Node* temp=Head;
    int n;
    cout<<"Enter size :";
    cin>>n;
    vector<int>vec(n);

    for(int i=0;i<vec.size();i++) cin>>vec[i];

    Head=insertEnd(vec,0);
    temp=Head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;


    return 0;
}