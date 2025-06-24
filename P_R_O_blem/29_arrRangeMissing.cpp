/*
 Given an array arr[] of size n containing distinct integers within the range [1, n + 2] 
 find the two missing numbers from the first n + 2 natural numbers.
*/

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size+1]; // i want to start indexing with 1
    for(int i=1;i<=size;i++) cin>>arr[i];
    // making freq array of size: size+2
    int freq[size+3]; // i want to start indexing with 1
    for(int j=1;j<=size+2;j++) freq[j]=0;

    for(int i=1;i<=size;i++) freq[arr[i]]=1;

    for(int j=1;j<=size+2;j++){
        if(freq[j]==0) cout<<j<<" ";
    }
    cout<<endl;
    return 0;
}