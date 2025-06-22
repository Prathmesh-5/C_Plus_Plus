/*

1 2 3 
4 5 6 
7 8 9

*/

#include<iostream>3
using namespace std;

void sqNum(int n){
    int count=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    sqNum(n);

    return 0;
}