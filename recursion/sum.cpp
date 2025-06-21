#include<iostream>
using namespace std;

int add(int n){
    if(n==0) return 0;

    return n+add(n-1);
    
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int result=add(n);

    cout<<"The addition upto "<<n<<" is : "<<result<<endl;
    return 0;
    
}