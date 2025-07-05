#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter size of 1st and 2nd array resp. -> ";
    cin>>n1>>n2;
    int arr1[100],arr2[100];

    cout<<"Enter elements of array 1: "<<endl;
    for(int i=0;i<n1;i++) cin>>arr1[i];

    cout<<"Enter elements of array 2: "<<endl;
    for(int i=0;i<n2;i++) cin>>arr2[i];

    int merge[100];
    int n=n1+n2;
    for(int j=0;j<n1;j++){
        merge[j]=arr1[j];
    }
    for(int k=0;k<n2;k++){
        merge[k+n1]=arr2[k];
    }
    int freq[100]={0};

    for(int j=0;j<n;j++){
        freq[merge[j]]++;
        if(freq[merge[j]]==2) cout<<merge[j]<<" ";
    }

    cout<<endl;
    return 0;
}