/*                                             K A D A N E ' S     A L G O R I T H M

 finding max subarray sum by KADANE'S ALGORITHM :

*/


#include<iostream>
#include<vector>
#include<cmath>
#include<climits>

using namespace std;

void find_sum(vector<int> vec){
    int cur_sum=0,maxi=INT_MIN;
    for(int i=0;i<vec.size();i++){
        cur_sum+=vec[i];
        maxi=max(maxi,cur_sum);
        if(cur_sum<0) cur_sum=0;
    }
    cout<<"The maximum subarray sum is : "<<maxi<<endl;
    return ;
}

int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<vec.size();i++) cin>>vec[i];

    find_sum(vec);

    return 0;
}