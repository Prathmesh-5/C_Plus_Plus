#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<vec.size();i++) cin>>vec[i];

    // P R E F I X
    vector<int>prefix(n,0);

    prefix[0]=1;
    for(int i=1;i<prefix.size();i++){ 
    prefix[i]=prefix[i-1]*vec[i-1];
    }

    // S U F I X
    vector<int>suffix(n,0);
    suffix[n-1]=1;
    for(int j=n-2;j>=0;j--){
        suffix[j]=suffix[j+1]*vec[j+1];
    }

    for(int i=0;i<vec.size();i++){
        vec[i]=prefix[i]*suffix[i];
        cout<<vec[i]<<" ";
    }

    return 0;
}