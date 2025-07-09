#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec(4,1);
    for(int x:vec) cout<<x<<" ";

    return 0;
}