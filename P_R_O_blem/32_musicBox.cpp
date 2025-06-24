/*

Problem Statement -1: A magical music box plays a secret melody when fed a sequence of rhythm beats. 
Each beat is represented by a number, starting from 1. The box follows a looping logic to decide which beats to play:

# It plays beats from 1 to 100, but skips:
       * Any beat that is a multiple of 5 (those are too loud).
       * Any beat that contains the digit '9' (they're out of tune).

# For every 7th valid beat, it plays a "high note" instead of a normal beat.
# If 20 valid beats are played, the melody unlocks.
# If 100 beats are processed and 20 valid beats haven't been reached, the music box locks itself for the day.

*/

#include<iostream>
using namespace std;
bool isPresent9(int num){
    while(num>0){
    if(num%10==9) return true;
    num/=10;
    }
    return false;
}

bool isMultiple5(int num){
    if(num%5==0) return true;
    return false;
}

int main(){
    int a=1,b=100;
    int num=a;
    int count=0,flag=0;
    for(int i=a;i<=b;i++){
    if(isMultiple5(num) || isPresent9(num)) continue;
    count++;

    if(count%7==0) cout<<"*** high note ***"<<endl;

    if(count%20==0) flag=1;

}
if(flag==0) cout<<"^^^ L O C K E D ^^^"<<endl;
else cout<<"*** Melody unlocks ***"<<endl;


    return 0;
}