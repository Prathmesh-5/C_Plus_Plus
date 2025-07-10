// majority elements problem
// basic brute force approach
// O(n^2)

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<vec.size();i++) cin>>vec[i];

    for(int i=0;i<vec.size();i++){
        int count=0;
        for(int j=0;j<vec.size();j++){
            if(vec[i]==vec[j]) count++;
        }
        if(count>vec.size()/2){
            cout<<"--------------->>>>> "<<vec[i]<<endl;
            break;
        }
    }

    return 0;
}