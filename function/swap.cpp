// Swapping by using pointer or pass by refrence ...

#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

    return ;
}

int main(){
    int a,b;
    cout<<"Enter a and b value : ";
    cin>>a>>b;

    swap(&a,&b);
    cout<<"a = "<<a<<" b = "<<b<<endl;

    return 0;

}