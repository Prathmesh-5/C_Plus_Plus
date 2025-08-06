#include<iostream>
#include<vector>
#include<cmath>
#include<climits>

using namespace std;


int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<vec.size();i++) cin>>vec[i];
    int volume=0,mini;
    for(int i=0;i<vec.size()-1;i++){
        int width=1;
        for(int j=i+1;j<vec.size();j++){
            mini=min(vec[i],vec[j]);
            volume=max(volume,mini*width);
            width++;

        }
    }
    cout<<"the max volume is : "<<volume<<endl;

    return 0;
}