#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter first number and second number :";
    cin>>n1>>n2;
    char op;
    
    cout<<"Enter which operation you want to perform : ";
    cin>>op;

    switch(op){
        case '+':
        cout<<(n1+n2)<<endl;
        break;

        case '-':
        cout<<(n1-n2)<<endl;
        break;

        case '*':
        cout<<(n1*n2)<<endl;
        break;

        case '/':
        cout<<(n1/n2)<<endl;
        break;

        default:
        cout<<"INVALID OPERATION"<<endl;
    }
}