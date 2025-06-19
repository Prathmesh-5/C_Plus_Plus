#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int sum=0;

    while(n>0){
        sum=sum*10+(n%10);
        n/=10;
    }
    cout<<"Reverse is = "<<sum<<endl;
}