#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter size :";
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<vec.size();i++){
        cin>>vec[i];

    }

    int count=0,ans=0;
    for(int j=0;j<vec.size();j++){
        if(count==0){
            ans=vec[j];

        }
        if(ans==vec[j]) count++;
        else count--;

    }

    cout<<ans<<endl;


    return 0;
}