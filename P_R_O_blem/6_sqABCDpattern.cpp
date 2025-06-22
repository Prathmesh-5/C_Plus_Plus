/*

A B C D
A B C D
A B C D
A B C D

*/

#include<iostream>
using namespace std;

void sqPattern(int n){

    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
        
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;

    sqPattern(n);

    return 0;
}