#include<iostream>
#include<vector>
#include<climits>
#include<cmath>

using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<vec.size();i++) cin>>vec[i];
    int maxi=INT_MIN;

    for(int j=0;j<vec.size();j++){
        if(maxi<vec[j]) maxi=vec[j];
    }

    vector<int>freq(maxi+1,0);

    for(int i=0;i<vec.size();i++) freq[vec[i]]++;

    for(int k=0;k<freq.size();k++){
        if(freq[k]>vec.size()/2){
            cout<<k<<endl;
            break;
        }
    }

    

    return 0;
}