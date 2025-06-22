/*

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5


*/

#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=n-i+1;j--)
        cout<<j<<" ";
        for(int same=1;same<=(n-i)*2-1;same++)
        cout<<n+1-i<<" ";
        for(int k=n-i+1;k<=n;k++){
            if(k==1) continue;
            else cout<<k<<" ";
        }
    cout<<endl;

    }
    return ;
}

void pattern_ops(int n){
    for(int i=n-1;i>=1;i--){
        for(int j=n;j>=n-i+1;j--)
        cout<<j<<" ";
        for(int same=1;same<=(n-i)*2-1;same++)
        cout<<n+1-i<<" ";
        for(int k=n-i+1;k<=n;k++){
            if(k==1) continue;
            else cout<<k<<" ";
        }
    cout<<endl;

    }
    return ;
}
int main(){
    int n;
    cout<<"Enter no. of rows :";
    cin>>n;

    pattern(n);
    pattern_ops(n);

    return 0;
}