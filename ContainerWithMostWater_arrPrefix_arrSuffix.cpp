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
    int left=0;
    int right=vec.size()-1;
    int mini;
    int volume=0;


    while(left<right){
        int width=right-left;
        mini=min(vec[left],vec[right]);

        volume=max(volume,mini*width);
        (vec[left]<vec[right])?left++:right--;

    }
    cout<<"max water = "<<volume<<endl;

    return 0;
}