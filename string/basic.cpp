#include<iostream>
using namespace std;
int main(){

    // printing a string 
    string str=" *** hi my name is raj *** ";
    cout<<str<<endl;

    string x;
    cout<<"Enter any string : ";
    getline(cin,x);
    cout<<"The entered string is : "<<x<<endl; // output is : prathmesh chauhan is great



    // taking string as a input from user in right way
    string y;
    cout<<"Enter any string : "; // if i entered : prathmesh chauhan is great
    getline(cin, y);
    cout<<"The entered string is : "<<y<<endl; // output is : prathmesh chauhan is great
    

    return 0;
}