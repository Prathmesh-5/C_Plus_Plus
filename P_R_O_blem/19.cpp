// calculate power

#include<iostream>
using namespace std;
int main(){
    int num,power;
    cout<<"Enter number and power :";
    cin>>num>>power;
    if(num!=0){
    int multi=1;
    for(int i=0;i<power;i++){
        multi*=num;
    }
    cout<<"answer is = "<<multi<<endl;
}

else if(num==0) cout<<"answer is = 0"<<endl;


    return 0;
}