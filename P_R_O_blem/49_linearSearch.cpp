#include<iostream>
using namespace std;

bool isPresent(int arr[],int n,int target){

    for(int i=0;i<n;i++){
        if(target==arr[i]) return true;
    }
    return false;

}

int main(){
    int n,target;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[100];

    cout<<"Enter all element in sequence wise:"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"Enter your targeted element : ";
    cin>>target;

    bool ans=isPresent(arr,n,target);

    if(ans) cout<<"Yes it is present"<<endl;
    else cout<<"No it is not present"<<endl;


    return 0;
}