#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int>vec(n);

    for(int i=0;i<vec.size();i++) cin>>vec[i];

    int count=0;
    int target;
    cout<<"Enter your targeted element : ";
    cin>>target;

    for(int j=0;j<vec.size();j++){
        if(vec[j]==target) count++;
    }
    cout<<"Total occurance of "<<target<<" is :"<<count<<endl;

    return 0;
}