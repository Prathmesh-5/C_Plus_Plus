/*

Problem Statement -3: In a secret research facility, there is a high-security safe that 
can only be unlocked using a prime number key. 

But the system is extremely strict:

* The number must be a positive integer between 1000 and 9999.
* The number must be odd (to prevent commonly guessed even numbers).
* The number must not contain the digit '7' (as it's considered a weak digit by the encryption system).
* And of course, it must be a prime number.

------->  ((  Only if all conditions are met, the safe will unlock.   ))

*/

#include<iostream>
using namespace std;

bool isNotPrime(int code){

    for(int i=2;i<code;i++){
        if(code%i==0) return true;
        else continue;
    }
    return false;
}

bool isContain7(int code){

    while(code>0){
        if(code%10==7) return true;
        code/=10;
    }
    return false;
}

int main(){
    int code;
    cout<<"Enter a positive integer between 1000 and 9999 :";
    cin>>code;

    if(code/1000>=1 && code/1000<=9){ // check kal raha hai ki 4 digit ka hai ki nahi 

    if(code%2==0 || isContain7(code) || isNotPrime(code)) cout<<"Safe will LOCKED"<<endl;
    else cout<<"Safe will UnLocked"<<endl;
    }

    else cout<<"INVALID error"<<endl; // agar 4 digit ka nahi hua too


    return 0;
}