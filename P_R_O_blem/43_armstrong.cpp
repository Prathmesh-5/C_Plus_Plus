#include<iostream>
#include<cmath>
using namespace std;



int count_digit(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;

}

bool isArmstrong(int n){
    int x=n;
    int digit=count_digit(n);
    int sum=0;
    
    while(n!=0){
        sum+=pow(n%10,digit);
        n/=10;
    }
    if(sum==x) return true;
    return false;
}

int main(){
    int n;
    cin>>n;

    bool ans=isArmstrong(n);

    cout<<ans<<endl;


    return 0;
}