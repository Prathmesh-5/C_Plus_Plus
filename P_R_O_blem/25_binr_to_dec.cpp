// binary to decimal 

#include<iostream>
#include<cmath>
using namespace std;

void decimal(int n){
    int i=0,sum=0;
    while(n>0){
        sum=sum+(n%10)*pow(2,i);
        n/=10;
        i++;
    }
    cout<<"decimal is : "<<sum<<endl;
    return ;
}

int main(){
    int n;
    cout<<"Enter a binary number :";
    cin>>n;

    decimal(n);

    return 0;
}