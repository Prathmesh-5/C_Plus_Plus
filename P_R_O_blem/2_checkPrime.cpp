// Q2: check if a number is prime or not ?

#include<iostream>
using namespace std;

void checkPrime(int num){
    if(num==1) cout<<num<<" is not prime"<<endl;
    else {
    int key=0;
    for(int i=2;i<num;i++){
        if(num%2==0){
            key=1;
            break;
        }
        else key=0;
    }
    if(key==0) cout<<num<<" is prime"<<endl;
    else cout<<num<<" is not prime"<<endl;
}

return ;

}
int main(){
    int num;
    cout<<"Enter a number to check it is prime or not : ";
    cin>>num;

    checkPrime(num);

    return 0;
}