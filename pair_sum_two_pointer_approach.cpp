// pair sum problem
// two pointer approach
// given sorted array  
// ... O(n) ...

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<vec.size();i++) cin>>vec[i];

    int left_p=0;
    int right_p=vec.size()-1;
    int ps;

    int target;
    cout<<"Enter targeted sum :";
    cin>>target;
    int flag=0;

    while(left<right){
        ps=vec[left_p]+vec[right_p];
        if(ps>target) right_p--;
        else if(ps<target) left_p++;
        else {
            cout<<"["<<left_p<<","<<right_p<<"]"<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0) cout<<"none"<<endl;


    return 0;
}