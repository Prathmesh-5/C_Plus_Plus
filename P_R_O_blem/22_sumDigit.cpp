// calculate sum of digits of a number

#include<iostream>
using namespace std;

void addDigit(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    cout<<"sum = "<<sum<<endl;

    return ;
}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    addDigit(n);

    return 0;
}