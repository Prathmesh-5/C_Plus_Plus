/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++)
        cout<<j<<" ";
        for(int star=1;star<=2*i-2;star++)
        cout<<"* ";
        for(int k=n-i+1;k>=1;k--)
        cout<<k<<" ";
    cout<<endl;
    }
    return ;

}

int main(){
    int n;
    cout<<"Enter the no. of rows : ";
    cin>>n;

    pattern(n);

    return 0;
}