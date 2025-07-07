#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<vec.size();i++) cin>>vec[i];

    int x;
    cout<<"Enter targeted element : ";
    cin>>x;
    int count=0;

    for(int j=0;j<vec.size();j++){
        if(vec[j]>x) count++;
    }

    cout<<"total count = "<<count<<endl;

    return 0;
}