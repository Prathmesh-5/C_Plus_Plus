#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int num;
    cout<<"Enter number :";
    cin>>num;
    int i=0;
    while(pow(2,i)<=num){
        i++;
    }
    int n=i-1;
    int sum=0;

    for(int place=n;place>=0;place--){
        if(pow(2,place)<=num){
            num-=pow(2,place);
            sum+=1*pow(10,place);
        }
        else{
            sum+=0;
        }
    }

    cout<<"binary number = "<<sum<<endl;

    return 0;
}