#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;
cin>>n;
vector<int>vec(n);
for(int i=0;i<vec.size();i++) cin>>vec[i];

int prefix=1,suffix=1;

vector<int>ans(n,0);

for(int i=0;i<n;i++){
    
    ans[i]=prefix;
    prefix*=vec[i];
}

for(int j=n-1;j>=0;j--){
    ans[j]*=suffix;
    suffix*=vec[j];
}

for(int i=0;i<n;i++) cout<<ans[i]<<" ";


    return 0;
}