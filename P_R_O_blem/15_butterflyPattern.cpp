/*

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/

#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<"* ";
        for(int space=1;space<=(n-i)*2;space++)
        cout<<"  ";
        for(int k=1;k<=i;k++)
        cout<<"* ";
    cout<<endl;
    
    }
    return ;
}

void pattern_ops(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
        cout<<"* ";
        for(int space=1;space<=(n-i)*2;space++)
        cout<<"  ";
        for(int k=1;k<=i;k++)
        cout<<"* ";
    cout<<endl;
    
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    pattern(n);
    pattern_ops(n);

    return 0;
}