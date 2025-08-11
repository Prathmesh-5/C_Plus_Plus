// USING BINARY SEARCH APPROACH

#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<vec.size();i++) cin>>vec[i];

    int left=1;
    int right=vec.size()-2;
    int index;

    while(left<=right){

        int mid=left+((right-left)/2);

        if(vec[mid]>vec[mid-1] && vec[mid]>vec[mid+1]){
            index=mid;
            break;

        }

        else if(vec[mid]<vec[mid-1]) right=mid-1;
        else left=mid+1;

    }

    cout<<"peak index is : "<<index<<endl;


    return 0;
}