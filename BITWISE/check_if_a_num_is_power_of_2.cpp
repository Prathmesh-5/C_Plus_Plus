#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;

    if(x==0) cout<<"NOT POWER OF 2"<<endl;
    else if(x & (x-1)) cout<<"NOT POWER OF 2"<<endl;
    else cout<<"YES, IT IS POWER OF 2"<<endl;

    return 0;
}