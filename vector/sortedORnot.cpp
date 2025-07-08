#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<vec.size();i++) cin>>vec[i];
    int flag=0;
    for(int j=0;j<vec.size()-1;j++){
        if(vec[j]>vec[j+1]){
            flag=1;
            break; 
        }
    }
    if(flag==0) cout<<"SORTED"<<endl;
    else cout<<"not SORTED"<<endl;

    return 0;
}