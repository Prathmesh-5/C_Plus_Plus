#include<iostream>
#include<vector>
using namespace std;

bool isValidMid(int maximumPages,int n,int m,vector<int> vec){
    int page=0,student=1;

    for(int i=0;i<n;i++){
        if(vec[i]>maximumPages) return false;
        else if(page+vec[i]<=maximumPages){
            page+=vec[i];
        }
        else {
            student++;
            page=vec[i];
        }
    }

    if(student>m) return false;
    else return true;


}
int main(){
    int n,m;
    cout<<"Enter the no. of books : ";
    cin>>n;
    cout<<"Enter the no. of students : ";
    cin>>m;

    vector<int>vec(n);
    cout<<"Enter no. of pages of each book : \n";
    for(int i=0;i<vec.size();i++) cin>>vec[i];

    /* mera answer min range and max range ke 
    under hi lie karega to min wala to pata hai 
    0 page hoga minimum but max wlale ke liye sum kar kiya jaye 
    */

    int sum=0;
    for(int j=0;j<vec.size();j++) sum+=vec[j];
    
    // range aa gayi mere paas ab -> maximum range = sum

    int left=0;
    int right=sum;
    int mid;

    int ans=-1;
    while(left<=right){
        mid=left+((right-left)/2);

        if(isValidMid(mid,n,m,vec)){
            ans=mid;
            right=mid-1;
        }
        else left=mid+1;

    }

    cout<<"answer is : "<<ans<<endl;
    
    return 0;
}