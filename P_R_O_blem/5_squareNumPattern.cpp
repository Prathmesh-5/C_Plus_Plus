/*

1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4

*/

#include<iostream>
using namespace std;

void sqPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        cout<<j<<" ";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    sqPattern(n);
    
    return 0;
}