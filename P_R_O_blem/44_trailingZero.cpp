// finding  trailing zero of a given factorial 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    int sum=0;
    while(n>=5){
        sum+=n/5;
        n/=5;
    }

    cout<<sum<<endl;

    return 0;
}