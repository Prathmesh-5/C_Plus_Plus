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

Node* insertPosition(vector<int> vec, int pos,Node* Head,int elem){

    Node* newNode=new Node(elem);
    Node* temp=Head;

    if(pos==1){
        newNode->next=temp;
        temp=newNode;
        return temp;

    }

    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    temp=Head;
    

    return temp;;

    
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
            temp=new Node(vec[i]);
            Head=temp;
        }
        else{
            temp->next=new Node(vec[i]);
            temp=temp->next;
        }
    }


    int position,elem;
    cout<<"Enter the position and the value of element : ";
    cin>>position>>elem;

    Head=insertPosition(vec,position,Head,elem);

    temp=Head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;


    return 0;
}