#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }

    vector<int>ans(n,0);
    for(int i=0;i<vec.size();i++){
         int multi=1;
        for(int j=0;j<vec.size();j++){
            if(i!=j) multi*=vec[j];
        }
        ans[i]=multi;
        
    }

    for(int i=0;i<vec.size();i++) cout<<ans[i]<<" ";

    return 0;
}