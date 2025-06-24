// find sumPrime-sumNonPrime

#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num==1) return false;

    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
        else continue;
    }
    return true;
    
}

int difference(int a, int b){

    int num=a,sumPrime=0,sumNonPrime=0;
    while(num<=b){
    if(isPrime(num)) sumPrime+=num;
    else sumNonPrime+=num;
    num++;

    }
    return sumPrime-sumNonPrime;
}

int main(){
    int a,b;
    cout<<"Enter the range from a to b : ";
    cin>>a>>b;

    int ans=difference(a,b);

    cout<<ans<<endl;

    return 0; 
}