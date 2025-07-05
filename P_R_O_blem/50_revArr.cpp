// reverse an array :

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
    cout<<"Enter size of array: ";
    cin>>n;
// taking input 
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
// main work
    for(int j=0;j<n;j++){
        if(j>=n-j-1) break;
        swap(arr,j,n-j-1);
    }
//display
    for(int k=0;k<n;k++) cout<<arr[k]<<" ";
    cout<<endl;

    return 0;
}