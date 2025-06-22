/*

1
1 2
1 2 3
1 2 3 4

*/

#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<j<<" ";
    cout<<endl;
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter no. of rows :";
    cin>>n;

    pattern(n);

    return 0;
}