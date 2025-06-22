/*

      *
    *   *
  *        *
*            *
  *        *
    *    * 
      *

*/

#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int space=1;space<=n-i;space++)
        cout<<"  ";
        //patetrn
        for(int j=1;j<=(2*i-1);j++){
            if(j==1 || j==(2*i-1)) cout<<"* ";
            else cout<<"  ";
        }
    cout<<endl;

    }
    return ;
}

void pattern1_ops(int n){
    for(int i=n-1;i>=1;i--){
        //space
        for(int space=1;space<=n-i;space++)
        cout<<"  ";
        //patetrn
        for(int j=1;j<=(2*i-1);j++){
            if(j==1 || j==(2*i-1)) cout<<"* ";
            else cout<<"  ";
        }
    cout<<endl;

    }
    return ;
}

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    pattern1(n);
    pattern1_ops(n);
    return 0;
}