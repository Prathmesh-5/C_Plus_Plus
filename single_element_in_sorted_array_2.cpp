#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<vec.size();i++) cin>>vec[i];
    int left,right;
    left=0;
    right=n-1;
    int mid;
    while(left<=right){
        mid=left+((right-left)/2);

        if(vec[mid]!=vec[mid-1] && vec[mid]!=vec[mid+1]){
            cout<<vec[mid]<<" is a sigle element"<<endl;
            break;
        }

        else if(vec[mid]==vec[mid-1]){
            if((mid-left+1)%2!=0) right=mid-1;
            else left=mid+1;
        }
        else if(vec[mid]==vec[mid+1]){
            if((right-mid+1)%2!=0) left=mid+1;
            else right=mid-1;
        }


    }

}