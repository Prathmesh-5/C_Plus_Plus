#include<iostream>
using namespace std;


int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;

    if(x&1) cout<<"*** ODD ***"<<endl;
    else cout<<"*** EVEN ***"<<endl;

    return 0;
}