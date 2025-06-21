#include<iostream>
using namespace std;

int facto(int n){
    if(n==0 || n==1) return 1;
    return n*facto(n-1);
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    int ans=facto(n);
    cout<<"Factorial of "<<n<<" is : "<<ans<<endl;


    return 0;
}