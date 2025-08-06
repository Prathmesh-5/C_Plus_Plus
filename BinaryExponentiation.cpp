#include <iostream>
#include<cmath>

using namespace std;

int main() {
    double base;
    long index;
    cout << "Enter number a and b respectively: ";
    cin >> base >> index;
    double b=abs(base);

    long binary_form=abs(index);
    double ans=1;

    int i=1;
    while(i<=log(abs(index))/log(2)+1){
        
        if(binary_form%2==1){

            ans*=b;


        }
        b=b*b;
        binary_form/=2;
        i=i+1;


    }
int sign=1;
   if(index<0){
    
    sign=base/abs(base);
    if(index%2==0) ans=1/ans;
    else ans=sign*(1/ans);
   }
   
   else if(index>0){
    
    sign=base/abs(base);
    if(index%2==0) ans=ans;
    else ans=sign*(ans);
   }
   else if(index==0) ans=1;
   
    cout<<ans<<endl;


    return 0;
}
