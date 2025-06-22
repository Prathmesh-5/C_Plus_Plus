// Q1: check a character is in lowercase or in uppercase ?

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;

    if(ch>=65 && ch<=90) cout<<ch<<" is an uppercase"<<endl;
    else cout<<ch<<" is a lowercase"<<endl;



    return 0;
}