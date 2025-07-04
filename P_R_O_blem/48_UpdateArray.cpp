#include<iostream>
using namespace std;
void update(int arr[],int n){
    arr[1]=99;
    for(int j=0;j<n;j++) cout<<arr[j]<<" "; // 2 99 5 4 3 

    return ;
}
int main(){

    int arr[5]={2,7,5,4,3};
    // call the function for updating 
    update(arr,5);  // jo arr likha hai wo arr ka pahla address hai to jahir si baat hai ki update to hoga hi 

    cout<<endl;
    for(int i=0;i<5;i++) cout<<arr[i]<<" "; // 2 99 5 4 3 
        cout<<endl;

    return 0;
}