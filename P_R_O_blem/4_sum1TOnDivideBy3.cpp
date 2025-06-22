// Q4: sum of 1 to n which are divisible by 3 ?

#include<iostream>
using namespace std;

int add(int n){

    if(n==0) return 0;

    else if(n%3==0) return n+add(n-1);

    else return add(n-1);
}
int main(){
    int n;
    cout<<"Enter upto which term you want the sum :";
    cin>>n;

    int ans=add(n);
    cout<<"sum = "<<ans<<endl;

    return 0;
}