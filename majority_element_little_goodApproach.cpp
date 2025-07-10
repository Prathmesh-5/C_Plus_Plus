// O(n log n)
//first sort and then do
// majority element 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<vec.size();i++) cin>>vec[i];

    sort(vec.begin(),vec.end()); // O( nlog(n) )
    int count=1;

    for(int i=1;i<vec.size();i++){
        if(vec[i]==vec[i-1]){
            count++;
            if(count>vec.size()/2){
                cout<<vec[i]<<endl;
                break;
            }
        }
        else count=1;

    }



    return 0;
}