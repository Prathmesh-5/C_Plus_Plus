// find power using using bit manipulation :

#include<iostream>
using namespace std;

int power(int base,int b){
    static int result=1;

    if(b==0) return result;

    if(b&1){
        result=result*base;
    }
    else ; // do nothing
    return power(base*base,b>>1);

}

int main(){
    int a,b;
    cout<<"Enter a and b :";
    cin>>a>>b;

    int ans=power(a,b);

    cout<<a<<"^"<<b<<" = "<<ans<<endl;
    
    return 0;
}
