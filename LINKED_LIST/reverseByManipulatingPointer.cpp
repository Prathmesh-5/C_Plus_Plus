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

Node* Reverse(Node* Head){
    Node* future=NULL;
    Node* temp=Head;
    Node* prev=NULL;

    while(temp){
        future=temp->next;
        temp->next=prev;
        prev=temp;
        temp=future;
    }

    Head=prev;
    return Head;
}

int main(){
    Node *Head = NULL;
    Node *temp = Head;
    int n;
    cout << "Enter size :";
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];

        if (Head == NULL)
        {
            Head = new Node(vec[i]);
            temp = Head;
        }
        else
        {
            temp->next = new Node(vec[i]);
            temp = temp->next;
        }
    }
    temp = Head;

    Head = Reverse(Head);

    temp = Head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;


    return 0;
}
