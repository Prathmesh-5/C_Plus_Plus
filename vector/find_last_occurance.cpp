#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter initial size : ";
    cin>>n;
    vector<int>vec(n);

    for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }

    int x;
    cout<<"Enter your targeted element : ";
    cin>>x;
    int idx=0;
    for(int j=0;j<vec.size();j++){
        if(vec[j]==x) idx=j;
    }

    cout<<"The last occurance of "<<x<<" is : "<<idx<<endl;

    return 0;
}