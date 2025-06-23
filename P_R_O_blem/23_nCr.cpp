// calculate nCr = n!/( (n-r)! * r! )

#include<iostream>
using namespace std;

int facto(int x){
    if(x==0 || x==1) return 1;

    return x*facto(x-1);
}


int main(){
    int n,r;
    cout<<"Enter the value of n and r : ";
    cin>>n>>r;

    int result=facto(n)/(facto(n-r)*facto(r));

    cout<<n<<"C"<<r<<" = "<<result<<endl;

    return 0;
}