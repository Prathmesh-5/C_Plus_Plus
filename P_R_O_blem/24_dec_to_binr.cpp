// decimal to binary 

#include<iostream>
#include<cmath>
using namespace std;

void binary(int n){
    int i=0,sum=0;
    while(n>0){
        sum=sum+(n%2)*pow(10,i);
        n/=2;
        i++;
    }
    cout<<"binary is :"<<sum<<endl;

    return ;
}

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    binary(n);

    return 0;
}
