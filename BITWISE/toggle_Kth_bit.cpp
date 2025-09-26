#include<iostream>
using namespace std;

int main(){
    int x,k;
    cout<<"Enter number : ";
    cin>>x;
    cout<<"Enter Kth index from right : ";
    cin>>k;

    cout<< (x ^ (1 << k))<<endl;

    return 0;
}
