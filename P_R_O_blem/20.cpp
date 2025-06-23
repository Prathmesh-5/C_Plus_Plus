//factorial by using loop

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int facto=1;
    for(int i=1;i<=n;i++) facto*=i;

    cout<<"ans = "<<facto<<endl;

    return 0;
}