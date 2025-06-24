/*

Problem Statement -2: Agent Mira, an elite spy, receives a secret 4-digit code from headquarters. 
However, to unlock the hidden message, she must reverse the digits of the code. But the spy agency 
has implemented extra security rules to prevent interception by enemies.

Constraints:
* The input must be a 4-digit number (from 1000 to 9999). If not, display an error.
* The number must be palindrome-safe, meaning the reversed number must not be the same as the original (i.e., no palindromes).
* The reversed number must be divisible by 7-the agency uses this as a hidden verification checksum.
* The reversed number must not start with 0- codes like 1000 become invalid if reversed to 0001.

*/

#include<iostream>
#include<cmath>
using namespace std;

int reverse(int code){
    int sum=0;
    for(int i=3;i>=0;i--){
        sum+=(code%10)*pow(10,i);
    }
    return sum;
}

int main(){
    int code;
    cout<<"Enter the 4 digit code : ";
    cin>>code;

    if(code/1000>=1 && code/1000<=9){
        
        if(reverse(code)==code || reverse(code)%7!=0 || code%10==0) cout<<"ACCESS NOT GRANTED"<<endl;

        else cout<<"ACCESS GRANTED"<<endl;

    }
    else cout<<"!! ERROR !!"<<endl;

    return 0;
}