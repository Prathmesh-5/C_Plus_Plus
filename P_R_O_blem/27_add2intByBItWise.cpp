// add 2 number by using bit operations 

#include<iostream>
using namespace std;

int add(int a,int b){

    int sum=a^b;
    int carry=a&b;

    if(carry==0) return sum;

        carry<<=1;
        return add(sum,carry);
    
}

int main(){
    int a,b;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;

    int result=add(a,b);
    cout<<"the result is : "<<result<<endl;

    return 0;
}