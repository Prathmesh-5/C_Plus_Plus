// swapping alternative

#include<iostream>
using namespace std;

// function of swapp
void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    return ;
}

int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++) cin>>arr[i];

    for(int j=0;j<n;j+=2){
        if(j==n-1) break;
        swap(arr,j,j+1);
    }

    //display
    for(int k=0;k<n;k++) cout<<arr[k]<<" ";
    cout<<endl;

    return 0;
}