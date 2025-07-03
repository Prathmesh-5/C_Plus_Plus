#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int A,B;
    cout<<"Enter current coordinate : ";
    cin>>A>>B;
    int total=min(A-1,B-1)+min(A-1,8-B)+min(8-A,B-1)+min(8-A,8-B);

    cout<<"Total move is = "<<total<<endl;
    
    return 0;
}