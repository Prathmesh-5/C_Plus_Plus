#include<iostream>
using namespace std;
int add(int n1,int n2){
    return (n1+n2);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int result=add(n1,n2);
    cout<<"sum is = "<<result<<endl;
    cout<<min(4,7)<<endl;
    return 0;
    
}