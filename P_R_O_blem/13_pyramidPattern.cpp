/*

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/

#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int space=1;space<=n-i;space++)
        cout<<"  ";
        //number pattern 1 :
        for(int j=1;j<=i;j++)
        cout<<j<<" ";
        //number pattern 2 :
        for(int k=i-1;k>=1;k--)
        cout<<k<<" ";
    cout<<endl;

    }

}
int main(){
    int n;
    cout<<"Enter no.of rows :";
    cin>>n;

    pattern(n);

    return 0;
}