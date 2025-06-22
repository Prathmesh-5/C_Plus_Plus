/*

1 1 1 1
  2 2 2
    3 3
      4

*/

#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        // space
        for(int space=1;space<i;space++)
        cout<<"  ";
        for(int j=1;j<=n+1-i;j++)
        cout<<i<<" ";
    cout<<endl;
    }

    return ;
}

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    pattern(n);

    return 0;
}