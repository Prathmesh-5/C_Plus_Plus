// printing maximum possible subarray by using brute force approach :

#include<iostream>
#include<vector>

using namespace std;

void printSubarray(vector<int> vec){
    for(int start=0;start<vec.size();start++){
        for(int end=start;end<vec.size();end++){
            // printing that particular subarray :
            for(int i=start;i<=end;i++) cout<<vec[i]<<" ";
            cout<<endl;
        }
    }
    return ;

}
int main(){
    int size;
    cin>>size;
    vector<int>vec(size);

    for(int i=0;i<vec.size();i++) cin>>vec[i];
    cout<<endl;

    printSubarray(vec);

    return 0;
}