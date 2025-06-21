#include<iostream>
using namespace std;
int main(){

    // print the address of a and b  ->
    int a=24;
    int b=24;
    cout<<"The address of a is = "<<&a<<endl;
    cout<<"The address of b is = "<<&b<<endl;

    int x=6;
    int* p=&x; // pointer data type hai jo ki integer ka address store karega 
    cout<<"The address of x is : "<<p<<endl;

    cout<<*p<<endl; // p mein kiska address hai uski value So, answer is 6

    // ---- update the value -----
    *p=33; // ab x ki value 33 ho gayi hai

    cout<<"x = "<<x<<endl;

    return 0;

}