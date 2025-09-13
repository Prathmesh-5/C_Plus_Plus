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

Node* insertAtEnd(int num,Node* Head){
       
       Node* TEMP=Head;
       Node* newNode=new Node(num);
       if(Head==NULL) return newNode;

       while(TEMP->next != NULL){
              TEMP=TEMP->next;
       }

       TEMP->next=newNode;

       return Head;



}

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

       Head=insertAtEnd(12,Head);
       temp=Head;

       while(temp!=NULL){
              cout<<temp->data<<" -> ";
              temp=temp->next;
       }

       cout<<"NULL"<<endl;


return 0;
}