#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;

    if(num%2==0) cout<<num<<" is an even number "<<endl;
    else cout<<num<<" is an odd number "<<endl;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>99 && n<1000) cout<<"yes it is a 3 digit number"<<endl; // and bhi likh sakte hoo
    else cout<<"No not a 3 digit number"<<endl;

    int x;
    cout<<"Agin enter any number :";
    cin>>x;
    if(x%5==0 || x%3==0) cout<<"yes it is divisibe by 5 or 3"<<endl; // or bhi likh sakte hooo
    else cout<<"no, not divisible by 5 and 3"<<endl;

}