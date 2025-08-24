#include<iostream>
#include<vector>
using namespace std;



int findMid(int left,int right,int target,vector<int> nums){
    while(left<=right){

        int mid=left+((right-left)/2);
        
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) left=mid+1;
        else right=mid-1;

        }

        return -1;

}

int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<nums.size();i++) cin>>nums[i];

    int target;
    cout<<"Enter target value : ";
    cin>>target;

    
        int ans=findMid(0,nums.size()-1,target,nums);

        int ans_left=ans;
        while(ans_left > 0 && nums[ans_left]==nums[ans_left-1]){
            ans_left=findMid(0,ans_left-1,target,nums);
        }
        

        int ans_right=ans;
        while(ans_right<nums.size()-1 && nums[ans_right]==nums[ans_right+1]){
            ans_right=findMid(ans_right+1,nums.size()-1,target,nums);
        }

        cout<<"ans_left = "<<ans_left<<endl;
        cout<<"ans_rightt = "<<ans_right<<endl;
        
        return 0;
    }
