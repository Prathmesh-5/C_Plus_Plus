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
    int mini=INT_MAX;
    int profit=INT_MIN;

    for(int i=0;i<vec.size();i++) cin>>vec[i];

    for(int j=0;j<vec.size();j++){

        mini=min(mini,vec[j]);
        profit=max(profit,vec[j]-mini);

    }
    (profit>0) ? cout<<"maximum profit is : "<<profit<<endl : cout<<-1<<endl;

    return 0;



}