#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>vec(n);
    // sorted rehna chaiye 
    for(int i=0;i<vec.size();i++) cin>>vec[i];
    

    int left=0;
    int right=vec.size()-1;
    int mid;
    int target;
    cout<<"Enter target : ";
    cin>>target;
    int flag=0;

    while(left<=right){
        mid=(left+right)/2;
        if(vec[mid]>target) right=mid-1;
        else if(vec[mid]<target) left=mid+1;
        else{
            flag=1;
            cout<<"Target found at "<<mid<<endl;
            break;
        }


    }

    if(flag==0) cout<<"Target not exist"<<endl;



        
        

    return 0;
}