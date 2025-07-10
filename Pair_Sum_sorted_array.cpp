// brute force approach 
// pair sum problem 
// pahle se sorted array 

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    int target;
    cout<<"Enter target sum :";
    cin>>target;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(vec[i]+vec[j]==target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
                break;
            }
        }
    }



    return 0;
}