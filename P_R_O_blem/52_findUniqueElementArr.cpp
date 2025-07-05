#include<iostream>
#include<climits>
using namespace std;

int maximum(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    return max;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];

    int maxi=maximum(arr,n);

    int freq[100]={0};
    
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int j=0;j<=maxi;j++){
        if(freq[j]==1){
            cout<<j<<endl;
            break;
        }
    }

    return 0;
}