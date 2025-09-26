#include<iostream>
using namespace std;

int main(){
    int x,k;
    cout<<"Enter number : ";
    cin>>x;
    cout<<"Enetr kth index from right : ";
    cin>>k;

    if(x & (1<<k)) cout<<"*** SET BIT hai ***"<<endl;
    else cout<<"*** NOT SET BIT ***"<<endl;

    return 0;
}