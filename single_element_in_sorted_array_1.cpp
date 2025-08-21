#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";

    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<vec.size();i++) cin>>vec[i];

    for(int i=1;i<vec.size()-1;i++){
        if(vec[0]!=vec[1]){
            cout<<vec[0]<<endl;
            break;
        }
        else if(vec[vec.size()-1]!=vec[vec.size()-2]){
            cout<<vec[vec.size()-1]<<endl;
            break;
        }
            else if(vec[i]!=vec[i-1] && vec[i]!=vec[i+1]){
                cout<<vec[i]<<endl;
                break;
            }
            
        }

        if(vec.size()==1){
            cout<<vec[0]<<endl;
        }
        
        return 0;

}