/*

* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

*/

#include<iostream>
using namespace std;

void pattern(int n){

    for(int i=1;i<=n;i++){
        //star1
        for(int j=1;j<=n-(i-1);j++) cout<<"* ";
        //space
        for(int space=1;space<=2*(i-1);space++) cout<<"  ";
        //star2
        for(int k=1;k<=n-(i-1);k++) cout<<"* ";
    cout<<endl;
    }

    return ;
}

void pattern_opp(int n){

    for(int i=n;i>=1;i--){
        //star1
        for(int j=1;j<=n-(i-1);j++) cout<<"* ";
        //space
        for(int space=1;space<=2*(i-1);space++) cout<<"  ";
        //star2
        for(int k=1;k<=n-(i-1);k++) cout<<"* ";
    cout<<endl;
    }

    return ;
}

int main(){
    int n;
    cout<<"Enter no. of rows :";
    cin>>n;

    pattern(n);
    pattern_opp(n);

    return 0;
}