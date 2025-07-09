// finding maximum subarray sum in more optimized way in O(n^2) time by brute force approach :

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void find_max_sum(vector<int> vec,int max){
    for(int start=0;start<vec.size();start++){
        int sum=0;
        for(int end=start;end<vec.size();end++){
                sum+=vec[end];
                if(max<sum) max=sum;
        }
    }
    cout<<"the max subarray sum = "<<max<<endl;
    return ;


}

int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;

    vector<int>vec(n);
    int max=INT_MIN;

    for(int i=0;i<vec.size();i++) cin>>vec[i];

    find_max_sum(vec,max);

    return 0;
}