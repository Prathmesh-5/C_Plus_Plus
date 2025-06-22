/*

*
* *
* * *
* * * *

*/

#include<iostream>
using namespace std;

void triPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<"* ";
    cout<<endl;
    }
    
    return ;
}
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    triPattern(n);

    return 0;
}