// find nth term fibonacci number 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter term number :";
    cin>>n;

    int a=-1,b=1,sum;

    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }

    cout<<n<<" wale position par "<<sum<<" hai"<<endl;
    
    return 0;
}
