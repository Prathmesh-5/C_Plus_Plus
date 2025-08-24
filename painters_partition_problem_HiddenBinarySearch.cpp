#include<iostream>
#include<vector>
using namespace std;

bool isValidMid(int maximum_time,vector<int> vec,int painter){
    int time=0,num_painter=1;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>maximum_time) return false;
        else if(time+vec[i]<=maximum_time){
            time+=vec[i];
        }
        else{
            num_painter++;
            time=vec[i];
        }
    }

    if(num_painter>painter) return false;
    else return true;


}

int main(){
    int board;
    cout<<"Enter no. of boards : ";
    cin>>board;

    int painter;
    cout<<"Enter number of painters : ";
    cin>>painter;

    vector<int>vec(board);
    for(int i=0;i<vec.size();i++) cin>>vec[i];
    // min to zero hoga because min time =0
    // max to sare board ka sum hoga means sare time ka sum     

    int sum=0;
    for(int j=0;j<vec.size();j++) sum+=vec[j];

    int left=0;
    int right=sum;
    int mid;
    int ans=-1;

    while(left<=right){
        mid=left+((right-left)/2);

        if(isValidMid(mid,vec,painter)){
            right=mid-1;
            ans=mid;
        }
        else left=mid+1;


    }
    cout<<"ANSWER IS : "<<ans<<endl;

    return 0;

}