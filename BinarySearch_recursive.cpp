#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> vec,int target,int left,int right){

    if(left > right) return -1;
    int mid=left+((right-left)/2);
    
    if(target<vec[mid]) return BinarySearch(vec,target,left,mid-1);
    else if(target>vec[mid]) return BinarySearch(vec,target,mid+1,right);
    

    return mid;

}

int main(){
    int n;
    cin>>n;
    vector<int>vec(n);

    for(int i=0;i<vec.size();i++) cin>>vec[i];
    int target;
    cout<<"Enter targeted element : ";
    cin>>target;
    int left=0,right=vec.size()-1;

    int ans_index=BinarySearch(vec,target,left,right);

    if(ans_index==-1){
        cout<<"target element not in the array"<<endl;
    }
    else cout<<"founded targeted element at : "<<ans_index<<endl;



    return 0;
}