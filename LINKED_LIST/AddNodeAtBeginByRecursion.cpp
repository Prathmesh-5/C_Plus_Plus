#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next=NULL;
    }
};

Node* insertBegin(vector<int> vec,int index,Node* Prev){
    
    if(index==vec.size()) return Prev;
    
    Node* newNode=new Node(vec[index]);
    newNode->next=Prev;

    return insertBegin(vec,index+1,newNode);
}

int main(){
    Node* Head=NULL;
    Node* temp=Head;
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<vec.size();i++) cin>>vec[i];

    Head=insertBegin(vec,0,NULL);
    temp=Head;

    //display :
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;


    return 0;
}