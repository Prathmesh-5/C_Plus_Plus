/*

       * * * * *
     * * * *
   * * *
 * *
*
 * *
   * * *
     * * * *
       * * * * *
       
*/

#include<iostream>
using namespace std;

void pattern(int n){

    for(int i=1;i<=n;i++){
        //space
        for(int space=1;space<=n-i;space++) cout<<"  ";
        for(int j=1;j<=n-(i-1);j++) cout<<"* ";
    cout<<endl;
    }
    return ;
}

void pattern_opp(int n){

    for(int i=n-1;i>=1;i--){
        //space
        for(int space=1;space<=n-i;space++) cout<<"  ";
        for(int j=1;j<=n-(i-1);j++) cout<<"* ";
    cout<<endl;
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    pattern(n);
    pattern_opp(n);


    return 0;
}