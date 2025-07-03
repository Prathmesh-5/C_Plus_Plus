#include<iostream>
using namespace std;

void Upper(char ch){
    ch-=32;
    cout<<ch<<endl;
    return ;
}

int main(){
    char ch;
    cout<<"Enter any small alphabet: ";
    cin>>ch;
    Upper(ch);

    return 0;
}